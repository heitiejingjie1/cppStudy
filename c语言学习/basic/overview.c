/*
 *  #include: 预处理器指令
 *  include:
 * 包含头文件，把头文件中的所有内容都输入到该行所在的位置，这是一种"拷贝-粘贴"操作
 *  stdio.h: 标准输入/输出头文件，包含所有的输入输出函数
 */
#include <stdio.h>

/*
 *  函数前向声明: 为了让main函数能够识别到这个函数，具体实现放到main函数之后实现
 */
void display();
void circle_area();

/*
 *  main: 入口函数，程序从这里开始运行
 */
int main() {

  /*
   *  函数调用: 调用完成后返回到main函数继续执行下一行代码
   */
  display();
  circle_area();

  /*
   *  函数返回语句: 实际在c语言中是一种跳转语句
   */
  return 0;
}

void display() {
  /*
   *  声明:
   *  1、表明函数体中有一个叫num的变量
   *  2、这个变量的数据类型为int
   */
  int num;

  /*
   *  赋值表达式语句:
   *  把值存储在变量num的内存位置
   */
  num = 1;

  /*
   *  标准输出函数:
   *  printf(): 把值打印到屏幕上
   */
  printf("I am a simple ");
  printf("computer.\n");
  printf("My favorite number is %d, because it is first.\n", num);
}

void circle_area() {
  /*
   *  在一条声明中声明两个变量，中间用逗号隔开
   *  不建议这种写法，应分别声明两个变量
   */
  double radius, area;

  radius = 12.3;
  // 程序进行乘法运算，将计算结果赋值给area变量
  area = 3.14 * radius * radius;

  printf("这个圆的半径为%f, 圆的面积为%f.\n", radius, area);
}
