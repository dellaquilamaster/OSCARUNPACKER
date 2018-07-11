#include <stdio.h>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <Rtypes.h>
#include <TTree.h>

#include "OscarAnalysisVector.h"
#include "FAIRTree.h"
#include "EventoBruto.h"

#include <stdio.h>

OscarAnalysisVector::OscarAnalysisVector() :
PedSuppression(0),
InputData(0)
{}

OscarAnalysisVector::~OscarAnalysisVector()
{
  if(InputData)
  {
    delete InputData;
  }
}

int OscarAnalysisVector::Init(const char * parameters_file, const char * pedestals_file, TChain * input_chain)
{
  std::fstream file_par (parameters_file, std::ios::in);
  if(!file_par.is_open())
  {
    printf("Parameters>> Errore while opening %s file\n",parameters_file);
    return 0;
  }
  
  ElcChannel SingleCh;
  char       ChName[7];
  Int_t      ChNum;
  Double_t   ChPed;
  char       Stage[3];
  char       NumDet[3];
  Int_t      reading_index;
  
  /*initialize channel parameters*****************************************************/
  for(reading_index=0; file_par>>ChNum>>ChName; reading_index++)
  {
    strcpy(SingleCh.ch_name,ChName);
    strncpy(Stage,strrchr(ChName,'S')+1,2);
    Stage[2]='\0';
    strncpy(NumDet,strrchr(ChName,'S')+3,3);
    if(strcmp(Stage,"DE")==0)
      SingleCh.ch_code=100+atoi(NumDet);
    else
      SingleCh.ch_code=200+atoi(NumDet);
    SingleCh.stage=SingleCh.ch_code/100;
    SingleCh.numdet=SingleCh.ch_code%100;
    ParametersVect.push_back(SingleCh);
  }
  printf("Parameters>> Read %d lines from file %s\n",reading_index, parameters_file);
  file_par.close();
  /***********************************************************************************/
  
  /*inizializzazione pedestals********************************************************/
  if(PedSuppression)
  {
    std::fstream file_ped (pedestals_file, std::ios::in);
    if(!file_ped.is_open())
    {
      printf("Pedestals>> Error while opening %s file\n",pedestals_file);
      return 0;
    }
    for(reading_index=0; file_ped>>ChNum>>ChPed; reading_index++)
    {
      PedestalsVect.push_back(ChPed);
    }
    printf("Pedestals>> Read %d lines from file %s\n",reading_index, pedestals_file);
    file_ped.close();
  }
  else
  {
    for(reading_index=0; reading_index<ParametersVect.size(); reading_index++)
    {
      PedestalsVect.push_back(0); 
    }
  }
  /***********************************************************************************/
  
  /*apertura del tree di FAIR*/
  InputData = new FAIRTree(input_chain);
  
  return 1;    
}

void OscarAnalysisVector::EnablePedSuppression()
{
  PedSuppression=1; 
}

std::vector<EventoBruto>& OscarAnalysisVector::GetEvtBuffer()
{
  return EvtBuffer;
}

void OscarAnalysisVector::FillEvtBuffer()
{
  InputData->WriteBuffer(EvtBuffer,ParametersVect,PedestalsVect);
  return;
}
