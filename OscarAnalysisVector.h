#ifndef OSCARANALYSISVECTOR_H
#define OSCARANALYSISVECTOR_H

#include <vector>
#include <TTree.h>

#include "EventoBruto.h"
#include "ElcChannel.h"
#include "FAIRTree.h"

class OscarAnalysisVector
{
public:
  OscarAnalysisVector();
  ~OscarAnalysisVector();
  
  int                       Init         (const char * parameters_file, const char * pedestals_file, TChain * input_chain);
  void                      FillEvtBuffer();
  std::vector<EventoBruto>& GetEvtBuffer ();
  void                      EnablePedSuppression();
  
private:
  std::vector<EventoBruto> EvtBuffer;
  std::vector<ElcChannel>  ParametersVect;
  std::vector<Double_t>    PedestalsVect;
  FAIRTree                 *InputData;
  bool                     PedSuppression;
} ;

#endif