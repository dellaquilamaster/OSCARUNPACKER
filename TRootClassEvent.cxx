// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TRootClassEvent

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "TRootEvent.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TRootEvent(void *p = 0);
   static void *newArray_TRootEvent(Long_t size, void *p);
   static void delete_TRootEvent(void *p);
   static void deleteArray_TRootEvent(void *p);
   static void destruct_TRootEvent(void *p);
   static void streamer_TRootEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TRootEvent*)
   {
      ::TRootEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TRootEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TRootEvent", ::TRootEvent::Class_Version(), "TRootEvent.h", 58,
                  typeid(::TRootEvent), DefineBehavior(ptr, ptr),
                  &::TRootEvent::Dictionary, isa_proxy, 16,
                  sizeof(::TRootEvent) );
      instance.SetNew(&new_TRootEvent);
      instance.SetNewArray(&newArray_TRootEvent);
      instance.SetDelete(&delete_TRootEvent);
      instance.SetDeleteArray(&deleteArray_TRootEvent);
      instance.SetDestructor(&destruct_TRootEvent);
      instance.SetStreamerFunc(&streamer_TRootEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TRootEvent*)
   {
      return GenerateInitInstanceLocal((::TRootEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TRootEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TOscarEvent(void *p = 0);
   static void *newArray_TOscarEvent(Long_t size, void *p);
   static void delete_TOscarEvent(void *p);
   static void deleteArray_TOscarEvent(void *p);
   static void destruct_TOscarEvent(void *p);
   static void streamer_TOscarEvent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TOscarEvent*)
   {
      ::TOscarEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TOscarEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TOscarEvent", ::TOscarEvent::Class_Version(), "TRootEvent.h", 7,
                  typeid(::TOscarEvent), DefineBehavior(ptr, ptr),
                  &::TOscarEvent::Dictionary, isa_proxy, 16,
                  sizeof(::TOscarEvent) );
      instance.SetNew(&new_TOscarEvent);
      instance.SetNewArray(&newArray_TOscarEvent);
      instance.SetDelete(&delete_TOscarEvent);
      instance.SetDeleteArray(&deleteArray_TOscarEvent);
      instance.SetDestructor(&destruct_TOscarEvent);
      instance.SetStreamerFunc(&streamer_TOscarEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TOscarEvent*)
   {
      return GenerateInitInstanceLocal((::TOscarEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::TOscarEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TRootEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TRootEvent::Class_Name()
{
   return "TRootEvent";
}

//______________________________________________________________________________
const char *TRootEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TRootEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TRootEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRootEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRootEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TRootEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TOscarEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TOscarEvent::Class_Name()
{
   return "TOscarEvent";
}

//______________________________________________________________________________
const char *TOscarEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOscarEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TOscarEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TOscarEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOscarEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOscarEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOscarEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TOscarEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TRootEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TRootEvent.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> num_evt;
      R__b >> mult_phys;
      OscarTel.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TRootEvent::IsA());
   } else {
      R__c = R__b.WriteVersion(TRootEvent::IsA(), kTRUE);
      R__b << num_evt;
      R__b << mult_phys;
      OscarTel.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TRootEvent(void *p) {
      return  p ? new(p) ::TRootEvent : new ::TRootEvent;
   }
   static void *newArray_TRootEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TRootEvent[nElements] : new ::TRootEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TRootEvent(void *p) {
      delete ((::TRootEvent*)p);
   }
   static void deleteArray_TRootEvent(void *p) {
      delete [] ((::TRootEvent*)p);
   }
   static void destruct_TRootEvent(void *p) {
      typedef ::TRootEvent current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TRootEvent(TBuffer &buf, void *obj) {
      ((::TRootEvent*)obj)->::TRootEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::TRootEvent

//______________________________________________________________________________
void TOscarEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TOscarEvent.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> mult_phys;
      delete [] Z;
      Z = new Int_t[mult_phys];
      R__b.ReadFastArray(Z,mult_phys);
      delete [] A;
      A = new Int_t[mult_phys];
      R__b.ReadFastArray(A,mult_phys);
      delete [] mass_uma;
      mass_uma = new Double_t[mult_phys];
      R__b.ReadFastArray(mass_uma,mult_phys);
      delete [] destrip;
      destrip = new Int_t[mult_phys];
      R__b.ReadFastArray(destrip,mult_phys);
      delete [] eres;
      eres = new Int_t[mult_phys];
      R__b.ReadFastArray(eres,mult_phys);
      delete [] destripMeV;
      destripMeV = new Double_t[mult_phys];
      R__b.ReadFastArray(destripMeV,mult_phys);
      delete [] eresMeV;
      eresMeV = new Double_t[mult_phys];
      R__b.ReadFastArray(eresMeV,mult_phys);
      delete [] numstrip;
      numstrip = new Int_t[mult_phys];
      R__b.ReadFastArray(numstrip,mult_phys);
      delete [] numpad;
      numpad = new Int_t[mult_phys];
      R__b.ReadFastArray(numpad,mult_phys);
      delete [] theta;
      theta = new Double_t[mult_phys];
      R__b.ReadFastArray(theta,mult_phys);
      delete [] phi;
      phi = new Double_t[mult_phys];
      R__b.ReadFastArray(phi,mult_phys);
      delete [] energy;
      energy = new Double_t[mult_phys];
      R__b.ReadFastArray(energy,mult_phys);
      R__b.CheckByteCount(R__s, R__c, TOscarEvent::IsA());
   } else {
      R__c = R__b.WriteVersion(TOscarEvent::IsA(), kTRUE);
      R__b << mult_phys;
      R__b.WriteFastArray(Z,mult_phys);
      R__b.WriteFastArray(A,mult_phys);
      R__b.WriteFastArray(mass_uma,mult_phys);
      R__b.WriteFastArray(destrip,mult_phys);
      R__b.WriteFastArray(eres,mult_phys);
      R__b.WriteFastArray(destripMeV,mult_phys);
      R__b.WriteFastArray(eresMeV,mult_phys);
      R__b.WriteFastArray(numstrip,mult_phys);
      R__b.WriteFastArray(numpad,mult_phys);
      R__b.WriteFastArray(theta,mult_phys);
      R__b.WriteFastArray(phi,mult_phys);
      R__b.WriteFastArray(energy,mult_phys);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TOscarEvent(void *p) {
      return  p ? new(p) ::TOscarEvent : new ::TOscarEvent;
   }
   static void *newArray_TOscarEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TOscarEvent[nElements] : new ::TOscarEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TOscarEvent(void *p) {
      delete ((::TOscarEvent*)p);
   }
   static void deleteArray_TOscarEvent(void *p) {
      delete [] ((::TOscarEvent*)p);
   }
   static void destruct_TOscarEvent(void *p) {
      typedef ::TOscarEvent current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TOscarEvent(TBuffer &buf, void *obj) {
      ((::TOscarEvent*)obj)->::TOscarEvent::Streamer(buf);
   }
} // end of namespace ROOT for class ::TOscarEvent

namespace {
  void TriggerDictionaryInitialization_TRootClassEvent_Impl() {
    static const char* headers[] = {
"TRootEvent.h",
0
    };
    static const char* includePaths[] = {
"/cern/root-6.04.00/build/include",
"/media/Windows/Users/Daniele Dell'Aquila/Dropbox/Daniele-Ivano/Documenti_Utili/OSCARUNPACKER/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TRootEvent.h")))  TRootEvent;
class __attribute__((annotate("$clingAutoload$TRootEvent.h")))  TOscarEvent;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "TRootEvent.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TOscarEvent", payloadCode, "@",
"TRootEvent", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("TRootClassEvent",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_TRootClassEvent_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_TRootClassEvent_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_TRootClassEvent() {
  TriggerDictionaryInitialization_TRootClassEvent_Impl();
}
