#define FAIRTree_cxx
#include "FAIRTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include "EventoBruto.h"
#include "ElcChannel.h"
#include <vector>

void FAIRTree::WriteBuffer(std::vector<EventoBruto>& Buffer, std::vector<ElcChannel>  Parameters, std::vector<Double_t> Pedestals)
{
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntries();

   Int_t mult_strip;
   Int_t mult_pad;
   EventoBruto single_event;
   
   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {     
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      
      /*Azzeramento molteplicità dell'evento e pulizia vettori d'evento*/
      (single_event.StripDetector).mfront=0;
      ((single_event.StripDetector).numfront).clear();
      ((single_event.StripDetector).efront).clear();
      (single_event.PadDetector).mpad=0;
      ((single_event.PadDetector).numpad).clear();
      ((single_event.PadDetector).epad).clear();
      /*****************************************************************/
            
      for(int i = 0; i<32; i++)
      {
        if(m02[i]<=Pedestals[i]) continue; /*in questo caso siamo in pedestal e devo buttare il dato*/
          
        if(Parameters[i].stage==1) /*in questo caso siamo nel primo stadio*/
        {          
          (single_event.StripDetector).mfront++; /*incremento la molteplicità dello strip*/
          ((single_event.StripDetector).numfront).push_back(Parameters[i].numdet); /*inserisco nel vettore dei numeri di strip colpite la strip che ha risposto*/ 
          ((single_event.StripDetector).efront).push_back(m02[i]); /*inserisco il valore di energia*/
        }
        else /*in questo caso siamo nel secondo stadio*/
        {
          (single_event.PadDetector).mpad++; /*incremento la molteplicità dei pad*/
          ((single_event.PadDetector).numpad).push_back(Parameters[i].numdet); /*inserisco nel vettore dei numeri di pad colpiti il pad che ha risposto*/ 
          ((single_event.PadDetector).epad).push_back(m02[i]); /*inserisco il valore di energia*/         
        }
      }
      Buffer.push_back(single_event);
   }
}
