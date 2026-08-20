#include <stdio.h>

void overflow(void);
void homework(void);

int main(void) {
  // overflow();
  homework();
  return 0;
}

void overflow(void) {
  unsigned short us = 65535;
  float f_num = 3.0e38f;
  float f_num2 = .1234e-38f;

  printf("%hd\t%hd\n", us, us + 1);
  printf("%f\t%f\n", f_num, f_num * 100.0);
  printf("%f\t%f\n", f_num2, f_num2 / 2.0);
}

void homework(void) {
  {
    int age = 0;
    double minutes = 0.0;

    printf("请输入你的年龄:");
    scanf("%d", &age);

    minutes = age * 3.156e7;

    printf("你的年龄转化为秒为: %es\n", minutes);
  }

  {
    double waters = 0.0;
    double water_count = 0.0;

    printf("请输入你要计算的水的重量: ");
    scanf("%lf", &waters);
    water_count = waters * 950 / 3.0e-23;
    printf("一共有%e个水分子。\n", water_count);
  }

  {
  }
}
