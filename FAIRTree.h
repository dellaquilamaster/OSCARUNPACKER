//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jan 28 19:36:52 2016 by ROOT version 6.04/08
// from TTree h1/FAIRUNPACKER Tree
// found on file: calib_part1.root
//////////////////////////////////////////////////////////

#ifndef FAIRTree_h
#define FAIRTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <vector>

#include "EventoBruto.h"
#include "ElcChannel.h"

// Header file for the classes stored in the TTree if any.

class FAIRTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          m01[32];
   UInt_t          m02[32];
   UInt_t          m03[32];

   // List of branches
   TBranch        *b_m01_00;   //!
   TBranch        *b_m01_01;   //!
   TBranch        *b_m01_02;   //!
   TBranch        *b_m01_03;   //!
   TBranch        *b_m01_04;   //!
   TBranch        *b_m01_05;   //!
   TBranch        *b_m01_06;   //!
   TBranch        *b_m01_07;   //!
   TBranch        *b_m01_08;   //!
   TBranch        *b_m01_09;   //!
   TBranch        *b_m01_10;   //!
   TBranch        *b_m01_11;   //!
   TBranch        *b_m01_12;   //!
   TBranch        *b_m01_13;   //!
   TBranch        *b_m01_14;   //!
   TBranch        *b_m01_15;   //!
   TBranch        *b_m01_16;   //!
   TBranch        *b_m01_17;   //!
   TBranch        *b_m01_18;   //!
   TBranch        *b_m01_19;   //!
   TBranch        *b_m01_20;   //!
   TBranch        *b_m01_21;   //!
   TBranch        *b_m01_22;   //!
   TBranch        *b_m01_23;   //!
   TBranch        *b_m01_24;   //!
   TBranch        *b_m01_25;   //!
   TBranch        *b_m01_26;   //!
   TBranch        *b_m01_27;   //!
   TBranch        *b_m01_28;   //!
   TBranch        *b_m01_29;   //!
   TBranch        *b_m01_30;   //!
   TBranch        *b_m01_31;   //!
   TBranch        *b_m02_00;   //!
   TBranch        *b_m02_01;   //!
   TBranch        *b_m02_02;   //!
   TBranch        *b_m02_03;   //!
   TBranch        *b_m02_04;   //!
   TBranch        *b_m02_05;   //!
   TBranch        *b_m02_06;   //!
   TBranch        *b_m02_07;   //!
   TBranch        *b_m02_08;   //!
   TBranch        *b_m02_09;   //!
   TBranch        *b_m02_10;   //!
   TBranch        *b_m02_11;   //!
   TBranch        *b_m02_12;   //!
   TBranch        *b_m02_13;   //!
   TBranch        *b_m02_14;   //!
   TBranch        *b_m02_15;   //!
   TBranch        *b_m02_16;   //!
   TBranch        *b_m02_17;   //!
   TBranch        *b_m02_18;   //!
   TBranch        *b_m02_19;   //!
   TBranch        *b_m02_20;   //!
   TBranch        *b_m02_21;   //!
   TBranch        *b_m02_22;   //!
   TBranch        *b_m02_23;   //!
   TBranch        *b_m02_24;   //!
   TBranch        *b_m02_25;   //!
   TBranch        *b_m02_26;   //!
   TBranch        *b_m02_27;   //!
   TBranch        *b_m02_28;   //!
   TBranch        *b_m02_29;   //!
   TBranch        *b_m02_30;   //!
   TBranch        *b_m02_31;   //!
   TBranch        *b_m03_00;   //!
   TBranch        *b_m03_01;   //!
   TBranch        *b_m03_02;   //!
   TBranch        *b_m03_03;   //!
   TBranch        *b_m03_04;   //!
   TBranch        *b_m03_05;   //!
   TBranch        *b_m03_06;   //!
   TBranch        *b_m03_07;   //!
   TBranch        *b_m03_08;   //!
   TBranch        *b_m03_09;   //!
   TBranch        *b_m03_10;   //!
   TBranch        *b_m03_11;   //!
   TBranch        *b_m03_12;   //!
   TBranch        *b_m03_13;   //!
   TBranch        *b_m03_14;   //!
   TBranch        *b_m03_15;   //!
   TBranch        *b_m03_16;   //!
   TBranch        *b_m03_17;   //!
   TBranch        *b_m03_18;   //!
   TBranch        *b_m03_19;   //!
   TBranch        *b_m03_20;   //!
   TBranch        *b_m03_21;   //!
   TBranch        *b_m03_22;   //!
   TBranch        *b_m03_23;   //!
   TBranch        *b_m03_24;   //!
   TBranch        *b_m03_25;   //!
   TBranch        *b_m03_26;   //!
   TBranch        *b_m03_27;   //!
   TBranch        *b_m03_28;   //!
   TBranch        *b_m03_29;   //!
   TBranch        *b_m03_30;   //!
   TBranch        *b_m03_31;   //!

   FAIRTree(TTree *tree=0);
   virtual ~FAIRTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     WriteBuffer(std::vector<EventoBruto>& Buffer, std::vector<ElcChannel>  Parameters, std::vector<Double_t> Pedestals);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef FAIRTree_cxx
FAIRTree::FAIRTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("calib_part1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("calib_part1.root");
      }
      f->GetObject("h1",tree);

   }
   Init(tree);
}

FAIRTree::~FAIRTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t FAIRTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t FAIRTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void FAIRTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("m01_00", m01   , &b_m01_00);
   fChain->SetBranchAddress("m01_01", m01+1 , &b_m01_01);
   fChain->SetBranchAddress("m01_02", m01+2 , &b_m01_02);
   fChain->SetBranchAddress("m01_03", m01+3 , &b_m01_03);
   fChain->SetBranchAddress("m01_04", m01+4 , &b_m01_04);
   fChain->SetBranchAddress("m01_05", m01+5 , &b_m01_05);
   fChain->SetBranchAddress("m01_06", m01+6 , &b_m01_06);
   fChain->SetBranchAddress("m01_07", m01+7 , &b_m01_07);
   fChain->SetBranchAddress("m01_08", m01+8 , &b_m01_08);
   fChain->SetBranchAddress("m01_09", m01+9 , &b_m01_09);
   fChain->SetBranchAddress("m01_10", m01+10, &b_m01_10);
   fChain->SetBranchAddress("m01_11", m01+11, &b_m01_11);
   fChain->SetBranchAddress("m01_12", m01+12, &b_m01_12);
   fChain->SetBranchAddress("m01_13", m01+13, &b_m01_13);
   fChain->SetBranchAddress("m01_14", m01+14, &b_m01_14);
   fChain->SetBranchAddress("m01_15", m01+15, &b_m01_15);
   fChain->SetBranchAddress("m01_16", m01+16, &b_m01_16);
   fChain->SetBranchAddress("m01_17", m01+17, &b_m01_17);
   fChain->SetBranchAddress("m01_18", m01+18, &b_m01_18);
   fChain->SetBranchAddress("m01_19", m01+19, &b_m01_19);
   fChain->SetBranchAddress("m01_20", m01+20, &b_m01_20);
   fChain->SetBranchAddress("m01_21", m01+21, &b_m01_21);
   fChain->SetBranchAddress("m01_22", m01+22, &b_m01_22);
   fChain->SetBranchAddress("m01_23", m01+23, &b_m01_23);
   fChain->SetBranchAddress("m01_24", m01+24, &b_m01_24);
   fChain->SetBranchAddress("m01_25", m01+25, &b_m01_25);
   fChain->SetBranchAddress("m01_26", m01+26, &b_m01_26);
   fChain->SetBranchAddress("m01_27", m01+27, &b_m01_27);
   fChain->SetBranchAddress("m01_28", m01+28, &b_m01_28);
   fChain->SetBranchAddress("m01_29", m01+29, &b_m01_29);
   fChain->SetBranchAddress("m01_30", m01+30, &b_m01_30);
   fChain->SetBranchAddress("m01_31", m01+31, &b_m01_31);
   fChain->SetBranchAddress("m02_00", m02   , &b_m02_00);
   fChain->SetBranchAddress("m02_01", m02+1 , &b_m02_01);
   fChain->SetBranchAddress("m02_02", m02+2 , &b_m02_02);
   fChain->SetBranchAddress("m02_03", m02+3 , &b_m02_03);
   fChain->SetBranchAddress("m02_04", m02+4 , &b_m02_04);
   fChain->SetBranchAddress("m02_05", m02+5 , &b_m02_05);
   fChain->SetBranchAddress("m02_06", m02+6 , &b_m02_06);
   fChain->SetBranchAddress("m02_07", m02+7 , &b_m02_07);
   fChain->SetBranchAddress("m02_08", m02+8 , &b_m02_08);
   fChain->SetBranchAddress("m02_09", m02+9 , &b_m02_09);
   fChain->SetBranchAddress("m02_10", m02+10, &b_m02_10);
   fChain->SetBranchAddress("m02_11", m02+11, &b_m02_11);
   fChain->SetBranchAddress("m02_12", m02+12, &b_m02_12);
   fChain->SetBranchAddress("m02_13", m02+13, &b_m02_13);
   fChain->SetBranchAddress("m02_14", m02+14, &b_m02_14);
   fChain->SetBranchAddress("m02_15", m02+15, &b_m02_15);
   fChain->SetBranchAddress("m02_16", m02+16, &b_m02_16);
   fChain->SetBranchAddress("m02_17", m02+17, &b_m02_17);
   fChain->SetBranchAddress("m02_18", m02+18, &b_m02_18);
   fChain->SetBranchAddress("m02_19", m02+19, &b_m02_19);
   fChain->SetBranchAddress("m02_20", m02+20, &b_m02_20);
   fChain->SetBranchAddress("m02_21", m02+21, &b_m02_21);
   fChain->SetBranchAddress("m02_22", m02+22, &b_m02_22);
   fChain->SetBranchAddress("m02_23", m02+23, &b_m02_23);
   fChain->SetBranchAddress("m02_24", m02+24, &b_m02_24);
   fChain->SetBranchAddress("m02_25", m02+25, &b_m02_25);
   fChain->SetBranchAddress("m02_26", m02+26, &b_m02_26);
   fChain->SetBranchAddress("m02_27", m02+27, &b_m02_27);
   fChain->SetBranchAddress("m02_28", m02+28, &b_m02_28);
   fChain->SetBranchAddress("m02_29", m02+29, &b_m02_29);
   fChain->SetBranchAddress("m02_30", m02+30, &b_m02_30);
   fChain->SetBranchAddress("m02_31", m02+31, &b_m02_31);
   fChain->SetBranchAddress("m03_00", m03   , &b_m03_00);
   fChain->SetBranchAddress("m03_01", m03+1 , &b_m03_01);
   fChain->SetBranchAddress("m03_02", m03+2 , &b_m03_02);
   fChain->SetBranchAddress("m03_03", m03+3 , &b_m03_03);
   fChain->SetBranchAddress("m03_04", m03+4 , &b_m03_04);
   fChain->SetBranchAddress("m03_05", m03+5 , &b_m03_05);
   fChain->SetBranchAddress("m03_06", m03+6 , &b_m03_06);
   fChain->SetBranchAddress("m03_07", m03+7 , &b_m03_07);
   fChain->SetBranchAddress("m03_08", m03+8 , &b_m03_08);
   fChain->SetBranchAddress("m03_09", m03+9 , &b_m03_09);
   fChain->SetBranchAddress("m03_10", m03+10, &b_m03_10);
   fChain->SetBranchAddress("m03_11", m03+11, &b_m03_11);
   fChain->SetBranchAddress("m03_12", m03+12, &b_m03_12);
   fChain->SetBranchAddress("m03_13", m03+13, &b_m03_13);
   fChain->SetBranchAddress("m03_14", m03+14, &b_m03_14);
   fChain->SetBranchAddress("m03_15", m03+15, &b_m03_15);
   fChain->SetBranchAddress("m03_16", m03+16, &b_m03_16);
   fChain->SetBranchAddress("m03_17", m03+17, &b_m03_17);
   fChain->SetBranchAddress("m03_18", m03+18, &b_m03_18);
   fChain->SetBranchAddress("m03_19", m03+19, &b_m03_19);
   fChain->SetBranchAddress("m03_20", m03+20, &b_m03_20);
   fChain->SetBranchAddress("m03_21", m03+21, &b_m03_21);
   fChain->SetBranchAddress("m03_22", m03+22, &b_m03_22);
   fChain->SetBranchAddress("m03_23", m03+23, &b_m03_23);
   fChain->SetBranchAddress("m03_24", m03+24, &b_m03_24);
   fChain->SetBranchAddress("m03_25", m03+25, &b_m03_25);
   fChain->SetBranchAddress("m03_26", m03+26, &b_m03_26);
   fChain->SetBranchAddress("m03_27", m03+27, &b_m03_27);
   fChain->SetBranchAddress("m03_28", m03+28, &b_m03_28);
   fChain->SetBranchAddress("m03_29", m03+29, &b_m03_29);
   fChain->SetBranchAddress("m03_30", m03+30, &b_m03_30);
   fChain->SetBranchAddress("m03_31", m03+31, &b_m03_31);
   Notify();
}

Bool_t FAIRTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void FAIRTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t FAIRTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef FAIRTree_cxx
