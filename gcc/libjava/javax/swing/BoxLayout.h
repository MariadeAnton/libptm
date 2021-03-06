
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_BoxLayout__
#define __javax_swing_BoxLayout__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Container;
        class Dimension;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class BoxLayout;
        class SizeRequirements;
    }
  }
}

class javax::swing::BoxLayout : public ::java::lang::Object
{

public:
  BoxLayout(::java::awt::Container *, jint);
  virtual void addLayoutComponent(::java::lang::String *, ::java::awt::Component *);
  virtual void removeLayoutComponent(::java::awt::Component *);
private:
  jboolean isHorizontalIn(::java::awt::Container *);
public:
  virtual ::java::awt::Dimension * preferredLayoutSize(::java::awt::Container *);
  virtual ::java::awt::Dimension * minimumLayoutSize(::java::awt::Container *);
  virtual void layoutContainer(::java::awt::Container *);
  virtual void addLayoutComponent(::java::awt::Component *, ::java::lang::Object *);
  virtual jfloat getLayoutAlignmentX(::java::awt::Container *);
  virtual jfloat getLayoutAlignmentY(::java::awt::Container *);
  virtual void invalidateLayout(::java::awt::Container *);
  virtual ::java::awt::Dimension * maximumLayoutSize(::java::awt::Container *);
private:
  void checkTotalRequirements();
  void checkRequirements();
  void checkLayout();
public:
  static const jint X_AXIS = 0;
  static const jint Y_AXIS = 1;
  static const jint LINE_AXIS = 2;
  static const jint PAGE_AXIS = 3;
private:
  static const jlong serialVersionUID = -2474455742719112368LL;
  ::java::awt::Container * __attribute__((aligned(__alignof__( ::java::lang::Object)))) container;
  jint way;
  JArray< ::javax::swing::SizeRequirements * > * xChildren;
  JArray< ::javax::swing::SizeRequirements * > * yChildren;
  ::javax::swing::SizeRequirements * xTotal;
  ::javax::swing::SizeRequirements * yTotal;
  JArray< jint > * offsetsX;
  JArray< jint > * offsetsY;
  JArray< jint > * spansX;
  JArray< jint > * spansY;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_BoxLayout__
