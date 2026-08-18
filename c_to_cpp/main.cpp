#include "c_to_cpp.h"
#include "c_to_cpp_inline.h"
#include "c_to_cpp_referance.h"

void c_to_cpp_one();
void c_to_cpp_two();
void c_to_cpp_three();
void c_to_cpp_four();

int main() {
  // c_to_cpp_one();
  // c_to_cpp_two();
  // c_to_cpp_three();
  c_to_cpp_four();
  return 0;
}

void c_to_cpp_one() {
  bool_demo();
  memory_alignment_demo();
}

void c_to_cpp_two() {
  field_operator();
  new_and_delete_operrator();
  overload_demo();
  default_argument_function_demo();
}

void c_to_cpp_three() {
  ref_basic();
  ref_arg();
  ref_return();
}

void c_to_cpp_four() { type_conversion(); }
