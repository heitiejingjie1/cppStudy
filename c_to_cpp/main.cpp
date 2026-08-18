#include "c_to_cpp.h"

void c_to_cpp_one();
void c_to_cpp_two();

int main() {
  // c_to_cpp_one();
  c_to_cpp_two();
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
