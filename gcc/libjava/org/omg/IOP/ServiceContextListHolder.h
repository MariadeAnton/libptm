
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_IOP_ServiceContextListHolder__
#define __org_omg_IOP_ServiceContextListHolder__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace IOP
      {
          class ServiceContext;
          class ServiceContextListHolder;
      }
    }
  }
}

class org::omg::IOP::ServiceContextListHolder : public ::java::lang::Object
{

public:
  ServiceContextListHolder();
  ServiceContextListHolder(JArray< ::org::omg::IOP::ServiceContext * > *);
  void _read(::org::omg::CORBA::portable::InputStream *);
  void _write(::org::omg::CORBA::portable::OutputStream *);
  ::org::omg::CORBA::TypeCode * _type();
  JArray< ::org::omg::IOP::ServiceContext * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __org_omg_IOP_ServiceContextListHolder__
