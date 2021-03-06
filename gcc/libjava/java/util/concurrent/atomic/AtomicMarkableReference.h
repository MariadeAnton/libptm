
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_atomic_AtomicMarkableReference__
#define __java_util_concurrent_atomic_AtomicMarkableReference__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::util::concurrent::atomic::AtomicMarkableReference : public ::java::lang::Object
{

public:
  AtomicMarkableReference(::java::lang::Object *, jboolean);
  virtual ::java::lang::Object * getReference();
  virtual jboolean isMarked();
  virtual ::java::lang::Object * get(JArray< jboolean > *);
  virtual jboolean weakCompareAndSet(::java::lang::Object *, ::java::lang::Object *, jboolean, jboolean);
  virtual jboolean compareAndSet(::java::lang::Object *, ::java::lang::Object *, jboolean, jboolean);
  virtual void set(::java::lang::Object *, jboolean);
  virtual jboolean attemptMark(::java::lang::Object *, jboolean);
private:
  ::java::util::concurrent::atomic::AtomicReference * __attribute__((aligned(__alignof__( ::java::lang::Object)))) atomicRef;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_atomic_AtomicMarkableReference__
