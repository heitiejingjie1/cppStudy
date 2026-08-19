#include <stdio.h>

void print_name(void);
void print_name_address(void);
void age_to_day(void);
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void square(void);
void smile(void);

int main(void) {
  print_name();
  print_name_address();
  age_to_day();

  {
    jolly();
    jolly();
    jolly();
    deny();
  }

  {
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");
  }

  square();

  {
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");
  }

  return 0;
}

void print_name(void) {
  printf("Yin Hao\n");
  printf("Yin\nHao\n");
  printf("Yin ");
  printf("Hao\n");
}

void print_name_address(void) {
  printf("My name is Yin Hao, My address in ChongQing.\n");
}

void age_to_day(void) {
  int age = 31;
  int day = age * 365;

  printf("age = %d\tday = %d\n", age, day);
}

void jolly(void) { printf("For he's a jolly good fellow!\n"); }
void deny(void) { printf("Which nobody can deny!\n"); }

void br(void) { printf("Brazil,Russia"); }
void ic(void) { printf("India,China"); }

void square(void) {
  int toes = 10;

  printf("toes = %d\n", toes);
  printf("double toes = %d\n", 2 * toes);
  printf("square toes = %d\n", toes * toes);
}

void smile(void) { printf("Smile!"); }
