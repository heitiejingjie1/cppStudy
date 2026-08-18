#include "c_to_cpp.h"
#include <cstdio>
#include <iostream>

using namespace std;

void bool_demo() {
  // bool类型，true或false，非零值为true，零值为false

  bool result = -30;
  cout << result << endl;
}

void const_demo() {
  // const类型变量定义时必须初始化
  // const类型变量不能重新赋值
  const int a = 0;
  // a = 30;

  int b = 30;
  // const类型指针
  const int *
      pa; // "*"在const右边，表示指针是一个变量，可以指向其他变量，但指向的变量是一个常量，不能重新赋值
  pa = &b;
  // *pa = 31; // 是一个常量，不能重新赋值

  int *const pa2 =
      &b; // "*"在const左边，表示指针是一个常量，必须初始化，且不能重新指向其他变量，而且指向的变量是一个变量，可以重新赋值
  *pa2 = 31; // 是一个变量，可以重新赋值

  // const与define的区别
  // 能用编译期语义实体解决的，绝不用预处理器宏。
  // #define  在现代 C++中应仅用于头文件保护和条件编译。
}

void memory_alignment_demo() {
  Test test;
  // 内存对齐，为了更快的访问数据
  // 对齐规则:
  // 1、第一个成员与结构体变量的位置偏移量为0
  // 2、其他成员要对齐到某个数字的整数倍，对齐数取编译器默认对齐整数与该成员大小的较小值
  // 3、结构体为最大对齐整数的整数倍

  cout << sizeof(Test) << endl;
  cout << &test << endl;
  cout << static_cast<void *>(&test.a) << endl;
}

int var = 100;
void field_operator() {
  int var = 50;
  cout << var << endl;

  // 域运算符: 用于访问全局对象
  cout << ::var << endl;
}

void new_and_delete_operrator() {
  // new运算符:
  // 用于创建堆空间，成功返回首地址，失败直接抛出异常

  int *pa = new int(31); // 分配一个整数空间,且设定初始值为33
  cout << pa << endl;
  cout << *pa << endl;

  int *pb = new int[10]; // 分配10个连续的整数空间
  for (int i = 0; i < 10; ++i) {
    *(pb + i) = 56;
  }
  cout << *(pb + 5) << endl;

  delete pa;
  delete[] pb;

  // new一个对象  (new operator)
  // 1、分配内存(operator new)  == malloc
  // 2、调用构造函数
  // placement new   不分配内存，就地的调用拷贝构造函数

  // delete一个对象
  // 1、调用析构函数
  // 2、释放内存(operator delete)  == free
}

void test(int a) { cout << "int test" << endl; }
void test(double a) { cout << "double test" << endl; }

void overload_demo() {
  // 相同的作用域，如果两个函数名称相同而参数列表不同，我们就把他们称为重载(overlord)
  // 如果仅仅返回值类型不同，则不构成重载
  // 函数的重载又称为函数的多态性(静态的多态)
  // 静态多态：编译时确定函数的入口地址，静态联编
  // 动态多态：运行时确定函数的入口地址，动态联编

  test(1);
  test(1.1);
  // test('a');
}

void nameManagling_and_externC() {
  // extern C是为了实现c与cpp混合编程
  // 表示不进行名字改编
}

int default_arg(int a, int b) { return a + b; }

void default_argument_function_demo() {
  // 带默认参数的函数，如果有默认值，在定义时不能给出默认值
  // 注意二义性的情况
  cout << default_arg(10) << endl;
}
