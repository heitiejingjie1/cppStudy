#include "clock.h"

void clock_demo();

int main(int argc, char *argv[]) {
  clock_demo();
  return 0;
}

void clock_demo() {
  Clock c;
  c.init(23, 59, 58);

  c.update();
  c.display();
  c.update();
  c.display();
}
