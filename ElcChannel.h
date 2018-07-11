#ifndef ELCCHANNEL_H
#define ELCCHANNEL_H

#include <Rtypes.h>

typedef struct ElcChannel_
{
  char  ch_name[7];
  Int_t ch_code;
  Int_t stage;
  Int_t numdet;
  
} ElcChannel ; 

#endif