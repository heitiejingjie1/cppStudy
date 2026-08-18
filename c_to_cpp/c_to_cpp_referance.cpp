#include "c_to_cpp_referance.h"
#include <iostream>

using namespace std;

void ref_basic() {
  // 引用就是给一个变量起别名
  // 没有自己独立的地址空间
  // 与所引用的对象共享空间
  // 引用的改变会对所引用的对象做出改变
  // 引用定义时必须进行初始化，一经初始化不能改变引用对象

  int a = 31;
  int b = 58;
  int &refA = a;
  // int &refB;    // 定义引用时，必须进行初始化
  refA = 57;

  refA = b; // 不代表引用重新初始化，只是将值赋值给了引用
  cout << a << endl;
}

void const_ref() {
  // const引用，指向const对象的引用
  //
  const int a = 1024;
  int b = 30;
  const int &refA = a;
  // int &refB = a;   // 非法，无法将const
  // int转化为int，普通引用不能引用const对象，引用可能改变原有的对象
  const int &refC = b; // 合法，const引用可以引用非const对象，不会改变原有的对象

  double pi = 3.14;
  const int &refPI = pi; // 可能会丢失精度，const 低精度引用可以引用高精度对象
  // 等价于 int temp = pi;  const int &refPI = temp;
  // int &refPI2 = pi; // 低精度非const引用不能引用高精度对象
}

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void ref_arg() {
  // 引用参数
  // 形参值的改变可以影响实参
  // 与指针传递的区别:
  // 1、引用是直接访问，指针是间接访问
  // 2、引用没有自己的内存空间，指针有(4/8字节)
  // 3、一经初始化不能引用其他对象，指针可以

  int a = 31;
  int b = 56;
  swap(a, b); // 在函数调用时，引用进行初始化
  cout << "a = " << a << "\tb = " << b << endl;
}

int a[] = {1, 2, 3, 4, 5, 6};
int &index(int i) { return a[i]; }
void ref_return() {
  // 引用作为返回值，可以将返回值放在赋值操作符的左边，即左值
  // 不能返回对局部变量的引用
  index(2) = 7; // 在函数返回时进行初始化
  cout << a[2] << endl;
}
