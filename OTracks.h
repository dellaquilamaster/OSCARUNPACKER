#ifndef OTRACKS_H
#define OTRACKS_H

#include <Rtypes.h>

typedef struct OTracks_
{
  Int_t good_part;
  Int_t IndexStrip[4];
  Int_t IndexPad[4];
} OTracks;

#endif