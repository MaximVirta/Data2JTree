// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME nanoDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
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
#include "./src/AliJBaseTrack.h"
#include "./src/AliJBaseEventHeader.h"
#include "./src/JTreeDataManager.h"
#include "./src/JHistos.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_AliJBaseTrack(void *p = 0);
   static void *newArray_AliJBaseTrack(Long_t size, void *p);
   static void delete_AliJBaseTrack(void *p);
   static void deleteArray_AliJBaseTrack(void *p);
   static void destruct_AliJBaseTrack(void *p);
   static void streamer_AliJBaseTrack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliJBaseTrack*)
   {
      ::AliJBaseTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliJBaseTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliJBaseTrack", ::AliJBaseTrack::Class_Version(), "src/AliJBaseTrack.h", 26,
                  typeid(::AliJBaseTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliJBaseTrack::Dictionary, isa_proxy, 16,
                  sizeof(::AliJBaseTrack) );
      instance.SetNew(&new_AliJBaseTrack);
      instance.SetNewArray(&newArray_AliJBaseTrack);
      instance.SetDelete(&delete_AliJBaseTrack);
      instance.SetDeleteArray(&deleteArray_AliJBaseTrack);
      instance.SetDestructor(&destruct_AliJBaseTrack);
      instance.SetStreamerFunc(&streamer_AliJBaseTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliJBaseTrack*)
   {
      return GenerateInitInstanceLocal((::AliJBaseTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliJBaseTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliJBaseEventHeader(void *p = 0);
   static void *newArray_AliJBaseEventHeader(Long_t size, void *p);
   static void delete_AliJBaseEventHeader(void *p);
   static void deleteArray_AliJBaseEventHeader(void *p);
   static void destruct_AliJBaseEventHeader(void *p);
   static void streamer_AliJBaseEventHeader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliJBaseEventHeader*)
   {
      ::AliJBaseEventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliJBaseEventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliJBaseEventHeader", ::AliJBaseEventHeader::Class_Version(), "src/AliJBaseEventHeader.h", 22,
                  typeid(::AliJBaseEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliJBaseEventHeader::Dictionary, isa_proxy, 16,
                  sizeof(::AliJBaseEventHeader) );
      instance.SetNew(&new_AliJBaseEventHeader);
      instance.SetNewArray(&newArray_AliJBaseEventHeader);
      instance.SetDelete(&delete_AliJBaseEventHeader);
      instance.SetDeleteArray(&deleteArray_AliJBaseEventHeader);
      instance.SetDestructor(&destruct_AliJBaseEventHeader);
      instance.SetStreamerFunc(&streamer_AliJBaseEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliJBaseEventHeader*)
   {
      return GenerateInitInstanceLocal((::AliJBaseEventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliJBaseEventHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *JTreeDataManager_Dictionary();
   static void JTreeDataManager_TClassManip(TClass*);
   static void *new_JTreeDataManager(void *p = 0);
   static void *newArray_JTreeDataManager(Long_t size, void *p);
   static void delete_JTreeDataManager(void *p);
   static void deleteArray_JTreeDataManager(void *p);
   static void destruct_JTreeDataManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JTreeDataManager*)
   {
      ::JTreeDataManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::JTreeDataManager));
      static ::ROOT::TGenericClassInfo 
         instance("JTreeDataManager", "src/JTreeDataManager.h", 36,
                  typeid(::JTreeDataManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &JTreeDataManager_Dictionary, isa_proxy, 0,
                  sizeof(::JTreeDataManager) );
      instance.SetNew(&new_JTreeDataManager);
      instance.SetNewArray(&newArray_JTreeDataManager);
      instance.SetDelete(&delete_JTreeDataManager);
      instance.SetDeleteArray(&deleteArray_JTreeDataManager);
      instance.SetDestructor(&destruct_JTreeDataManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JTreeDataManager*)
   {
      return GenerateInitInstanceLocal((::JTreeDataManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::JTreeDataManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *JTreeDataManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::JTreeDataManager*)0x0)->GetClass();
      JTreeDataManager_TClassManip(theClass);
   return theClass;
   }

   static void JTreeDataManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *JHistos_Dictionary();
   static void JHistos_TClassManip(TClass*);
   static void *new_JHistos(void *p = 0);
   static void *newArray_JHistos(Long_t size, void *p);
   static void delete_JHistos(void *p);
   static void deleteArray_JHistos(void *p);
   static void destruct_JHistos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JHistos*)
   {
      ::JHistos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::JHistos));
      static ::ROOT::TGenericClassInfo 
         instance("JHistos", "src/JHistos.h", 23,
                  typeid(::JHistos), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &JHistos_Dictionary, isa_proxy, 0,
                  sizeof(::JHistos) );
      instance.SetNew(&new_JHistos);
      instance.SetNewArray(&newArray_JHistos);
      instance.SetDelete(&delete_JHistos);
      instance.SetDeleteArray(&deleteArray_JHistos);
      instance.SetDestructor(&destruct_JHistos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JHistos*)
   {
      return GenerateInitInstanceLocal((::JHistos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::JHistos*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *JHistos_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::JHistos*)0x0)->GetClass();
      JHistos_TClassManip(theClass);
   return theClass;
   }

   static void JHistos_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr AliJBaseTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliJBaseTrack::Class_Name()
{
   return "AliJBaseTrack";
}

//______________________________________________________________________________
const char *AliJBaseTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliJBaseTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliJBaseTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliJBaseTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliJBaseEventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliJBaseEventHeader::Class_Name()
{
   return "AliJBaseEventHeader";
}

//______________________________________________________________________________
const char *AliJBaseEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseEventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliJBaseEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseEventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliJBaseEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseEventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliJBaseEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseEventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void AliJBaseTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliJBaseTrack.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TLorentzVector::Streamer(R__b);
      R__b >> fID;
      R__b >> fLabel;
      R__b >> fParticleType;
      R__b >> fCharge;
      R__b >> fStatus;
      R__b.CheckByteCount(R__s, R__c, AliJBaseTrack::IsA());
   } else {
      R__c = R__b.WriteVersion(AliJBaseTrack::IsA(), kTRUE);
      TLorentzVector::Streamer(R__b);
      R__b << fID;
      R__b << fLabel;
      R__b << fParticleType;
      R__b << fCharge;
      R__b << fStatus;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliJBaseTrack(void *p) {
      return  p ? new(p) ::AliJBaseTrack : new ::AliJBaseTrack;
   }
   static void *newArray_AliJBaseTrack(Long_t nElements, void *p) {
      return p ? new(p) ::AliJBaseTrack[nElements] : new ::AliJBaseTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliJBaseTrack(void *p) {
      delete ((::AliJBaseTrack*)p);
   }
   static void deleteArray_AliJBaseTrack(void *p) {
      delete [] ((::AliJBaseTrack*)p);
   }
   static void destruct_AliJBaseTrack(void *p) {
      typedef ::AliJBaseTrack current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_AliJBaseTrack(TBuffer &buf, void *obj) {
      ((::AliJBaseTrack*)obj)->::AliJBaseTrack::Streamer(buf);
   }
} // end of namespace ROOT for class ::AliJBaseTrack

//______________________________________________________________________________
void AliJBaseEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliJBaseEventHeader.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fEventID;
      {float R_Dummy; R__b >> R_Dummy; fCentrality=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fEP=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxX=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxY=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxZ=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxZErr=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxMCX=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxMCY=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxMCZ=Double32_t(R_Dummy);}
      R__b.CheckByteCount(R__s, R__c, AliJBaseEventHeader::IsA());
   } else {
      R__c = R__b.WriteVersion(AliJBaseEventHeader::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fEventID;
      R__b << float(fCentrality);
      R__b << float(fEP);
      R__b << float(fVtxX);
      R__b << float(fVtxY);
      R__b << float(fVtxZ);
      R__b << float(fVtxZErr);
      R__b << float(fVtxMCX);
      R__b << float(fVtxMCY);
      R__b << float(fVtxMCZ);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliJBaseEventHeader(void *p) {
      return  p ? new(p) ::AliJBaseEventHeader : new ::AliJBaseEventHeader;
   }
   static void *newArray_AliJBaseEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::AliJBaseEventHeader[nElements] : new ::AliJBaseEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliJBaseEventHeader(void *p) {
      delete ((::AliJBaseEventHeader*)p);
   }
   static void deleteArray_AliJBaseEventHeader(void *p) {
      delete [] ((::AliJBaseEventHeader*)p);
   }
   static void destruct_AliJBaseEventHeader(void *p) {
      typedef ::AliJBaseEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_AliJBaseEventHeader(TBuffer &buf, void *obj) {
      ((::AliJBaseEventHeader*)obj)->::AliJBaseEventHeader::Streamer(buf);
   }
} // end of namespace ROOT for class ::AliJBaseEventHeader

namespace ROOT {
   // Wrappers around operator new
   static void *new_JTreeDataManager(void *p) {
      return  p ? new(p) ::JTreeDataManager : new ::JTreeDataManager;
   }
   static void *newArray_JTreeDataManager(Long_t nElements, void *p) {
      return p ? new(p) ::JTreeDataManager[nElements] : new ::JTreeDataManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_JTreeDataManager(void *p) {
      delete ((::JTreeDataManager*)p);
   }
   static void deleteArray_JTreeDataManager(void *p) {
      delete [] ((::JTreeDataManager*)p);
   }
   static void destruct_JTreeDataManager(void *p) {
      typedef ::JTreeDataManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::JTreeDataManager

namespace ROOT {
   // Wrappers around operator new
   static void *new_JHistos(void *p) {
      return  p ? new(p) ::JHistos : new ::JHistos;
   }
   static void *newArray_JHistos(Long_t nElements, void *p) {
      return p ? new(p) ::JHistos[nElements] : new ::JHistos[nElements];
   }
   // Wrapper around operator delete
   static void delete_JHistos(void *p) {
      delete ((::JHistos*)p);
   }
   static void deleteArray_JHistos(void *p) {
      delete [] ((::JHistos*)p);
   }
   static void destruct_JHistos(void *p) {
      typedef ::JHistos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::JHistos

namespace {
  void TriggerDictionaryInitialization_nanoDict_Impl() {
    static const char* headers[] = {
"./src/AliJBaseTrack.h",
"./src/AliJBaseEventHeader.h",
"./src/JTreeDataManager.h",
"./src/JHistos.h",
0
    };
    static const char* includePaths[] = {
"/Users/djkim/alice/sw/osx_x86-64/ROOT/v6-10-08-1/include",
"/Users/djkim/Dropbox/EMPP2016/ROOTCourses/03/rootTree2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "nanoDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$./src/AliJBaseTrack.h")))  AliJBaseTrack;
class __attribute__((annotate("$clingAutoload$./src/AliJBaseEventHeader.h")))  AliJBaseEventHeader;
class __attribute__((annotate("$clingAutoload$./src/JTreeDataManager.h")))  JTreeDataManager;
class __attribute__((annotate("$clingAutoload$./src/JHistos.h")))  JHistos;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "nanoDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "./src/AliJBaseTrack.h"
#include "./src/AliJBaseEventHeader.h"
#include "./src/JTreeDataManager.h"
#include "./src/JHistos.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"AliJBaseEventHeader", payloadCode, "@",
"AliJBaseTrack", payloadCode, "@",
"JHistos", payloadCode, "@",
"JTreeDataManager", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("nanoDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_nanoDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_nanoDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_nanoDict() {
  TriggerDictionaryInitialization_nanoDict_Impl();
}
