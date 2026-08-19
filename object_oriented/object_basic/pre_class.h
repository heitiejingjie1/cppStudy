#ifndef _PRE_CLASS_H_
#define _PRE_CLASS_H_
// #include "back_class.h"

class BackClass; // 前向声明

class PreClass {
public:
  // BackClass bc_;   // 前向声明的类不能实例化对象

  // 只能声明指针和引用
  BackClass *pbc_;
  BackClass &ref_bc_;

public:
  void display();
};

#endif // !_PRE_CLASS_H_
