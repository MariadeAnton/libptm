
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_NamingService_NameValidator__
#define __gnu_CORBA_NamingService_NameValidator__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace NamingService
      {
          class NameValidator;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CosNaming
      {
          class NameComponent;
      }
    }
  }
}

class gnu::CORBA::NamingService::NameValidator : public ::java::lang::Object
{

public:
  NameValidator();
  static void check(JArray< ::org::omg::CosNaming::NameComponent * > *);
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_NamingService_NameValidator__
