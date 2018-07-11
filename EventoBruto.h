#ifndef EVENTOBRUTO_H
#define EVENTOBRUTO_H

#include <Rtypes.h>
#include <vector>
#include "OStrip.h"
#include "OPad.h"

typedef struct EventoBruto_
{
  OStrip StripDetector;
  OPad   PadDetector;
} EventoBruto ; 

#endif