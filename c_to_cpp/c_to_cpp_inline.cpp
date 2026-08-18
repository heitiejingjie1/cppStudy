#include "c_to_cpp_inline.h"
#include <iostream>

using namespace std;

void inline_basic() {
  // 函数短小、频繁使用的函数应该使用内联函数
  // 内联函数和宏的区别:
  // 1、会进行类型检查，对实参表达式求值;宏只是进行简单的替换
  // 2、在编译时进行代码展开;宏在预编译时进行替换
}

void test_const_cast(int &a) { cout << "test pass" << endl; }

void type_conversion() {
  // const_cast
  {
    // const_cast:用来移除对象的常量性
    // 一般用于引用或指针
    // 目的不是为了改变这个对象的值
    // 通常是为了函数能够接受这个实际参数

    const int a = 1024;
    const int b = 56;

    // int result = const_cast<int>(a); // 无意义，编译不通过
    // int *pa = &a;  // 无法转换
    int *cpa = const_cast<int *>(&a);
    *cpa = 31;
    cout << a << endl;
    cout << &a << endl;
    cout << cpa << endl;

    int &refB = const_cast<int &>(b);
    refB = 58;
    cout << b << endl;

    // test_const_cast(a);
    test_const_cast(const_cast<int &>(a));
  }

  // static_cast
  {
    // static_cast：应用范围
    // 1、编译器隐式执行的所有转换

    // 2、大类型转换为小类型
    double d = 3.14;
    int a = static_cast<int>(d);

    // 3、void* 转换为某一类型指针
    void *vd;
    // int * ip = vd;
    int *ip2 = static_cast<int *>(vd);

    // 4、基类指针为派生类指针
    // 5、无法将const转换为nonconst
  }

  // reinterpret_cast
  {
    // reinterpret_cast:为操作数的位模式提供较低层的重新解释，也就是说将数据以二进制的形式重新解释
    // 很危险，也很自由
    int i;
    char *tStr = "hello";
    // i = reinterpret_cast<int>(tStr);
  }
}
