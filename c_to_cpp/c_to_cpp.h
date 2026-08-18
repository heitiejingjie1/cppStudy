#ifndef _C_TO_CPP_H_
#define _C_TO_CPP_H_

void bool_demo();
void const_demo();
void memory_alignment_demo();

void field_operator();
void new_and_delete_operrator();
void overload_demo();
void nameManagling_and_externC();
void default_argument_function_demo();

#pragma pack(8) // 改变对齐整数
struct Test {
  char a;
  double b;
  char c;
};
#pragma pack()

void test(int a);
void test(double a);

// 为了实现c与cpp混合编程
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
void test(char a);
void test2(long a);
#ifdef __cplusplus
}
#endif // __cplusplus

int default_arg(int a, int b = 5);

#endif // !_C_TO_CPP_H_
