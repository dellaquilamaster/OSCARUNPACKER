#include <stdio.h>
#include <stdlib.h>
#include <TTree.h>

#include "OscarAnalysisVector.h"
#include "TRootEvent.h"
#include "OAnalyzer.h"
#include "OCalibration.h"
#include "OGeometry.h"
#include "OscarLogo.h"

#include <TH2.h>
#include <TFile.h>

int main (int argc, char** argv)
{
  OscarLogo(); /*Draw Logo*/
  
  if(argc<2)
  {
    printf("Error: No input files!!!\n");
    return 1;
  }
  
  const char geometry_file[]="CONFIG/test_oscar.geom";
  const char parameter_file[]="CONFIG/test_oscar.par";
  const char pedestal_file[] ="CONFIG/test_oscar.ped";
  const char calib_file[]    ="CONFIG/test_oscar_part1.ene";
//   const char calib_file[]    ="CONFIG/test_oscar_part2.ene";
  const char dee_file[]      ="CONFIG/test_oscar_part1_dee.root";
//   const char dee_file[]      ="CONFIG/test_oscar_part2_dee.root";
  const char output_file[]   ="oscar.root";
  
  std::vector<EventoBruto> Events;
  
  /*creazione della TChain che punti ai dati**********/
  TChain * DataChain;
  DataChain=new TChain("h1");
  for(int i = 1; i<argc; i++)
  {
    if(!DataChain->Add(argv[i],0))
    {
      printf("Error while opening \"%s\" file.\n", argv[i]);
      return 1;
    }
  }
  /***************************************************/
  
  /***************************************************************************************************/
  /*riempimento del buffer per l'analisi degli eventi*/
  OscarAnalysisVector DataReader;
  DataReader.EnablePedSuppression(); /*abilitare soppressione pedestals*/
  if(!DataReader.Init(parameter_file,pedestal_file,DataChain)) /*inizializzazione buffer (parametri) ecc*/
  {
    return 1; /*errore nell'apertura del file di parametri o pedestals*/ 
  }
  DataReader.FillEvtBuffer(); /*riempimento buffer*/
  Events=DataReader.GetEvtBuffer();
  printf("Buffer Filled --> %d events stored\n",Events.size());
  /***************************************************/
  
  /*analisi degli eventi******************************/
  TRootDefine RootResources;
  if(!RootResources.Open(output_file)) /*apertura file di output e generazione del Tree di eventi*/
  {
    return 1; /*apertura file fallita*/
  }
  OGeometry GeometryModule;
  if(!GeometryModule.Init(geometry_file))
  {
    return 1; /*apertura file fallita*/ 
  }
  OIdentification IdModule;
  if(!IdModule.Init(dee_file))
  {
    return 1; /*apertura file fallita*/ 
  }
  OCalibration CalibModule;
  if(!CalibModule.Init(calib_file))
  {
    return 1; /*apertura file fallita*/ 
  }
  OAnalyzer   OscarAnalysis(Events,&RootResources,&GeometryModule,&IdModule,&CalibModule); /*costruzione analizzatore*/
  OscarAnalysis.RunDataAnalysis(); /*analisi dei dati*/
  /***************************************************/
  /***************************************************************************************************/
  
  RootResources.Close(); /*scrittura su file e chiusura*/
  
  return 0;
}
