#include <complex.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

void weight_to_platinum(void);
void int_demo(void);
void char_demo(void);
void portable_type_demo(void);
void float_demo(void);
void complex_and_imaginary_demo(void);
void flush_print(void);

int main(void) {
  // weight_to_platinum();
  // int_demo();
  // char_demo();
  // float_demo();
  complex_and_imaginary_demo();

  return 0;
}

/*
 *  存储单元:
 *    位(bit): 最小的存储单元，可以存储0或1
 *    字节(byte): 1byte = 8bit
 *    字(word): 设计计算机时给定的自然存储单位，不定
 */

/*
 *  数据类型:
 *    整数类型: 没有小数部分的数
 *    浮点数类型:
 * 带小数的数，范围大，算术运算损失精度更多，只是近似值，运算比整数慢
 */
void weight_to_platinum(void) {
  /*
   *  float: 单精度浮点数类型，比int能够处理更大范围的数据
   *  浮点数: 带小数点的数据
   */
  float weight;
  float value;

  printf("你想知道你的体重价值多少铂金吗？\n");
  printf("来吧!\n");
  printf("请输入你的体重:");

  /*
   *  标准输入函数:
   *  scanf(): 获取键盘的输入
   *  &weight: 获取weight变量在内存中的地址，以便将值存储到该地址
   */
  scanf("%f", &weight);

  value = 1700 * weight * 14.5833;

  printf("你的体重换算成铂金价值%.2f.\n", value);
}

void int_demo(void) {
  /*
   *  int: 有符号整数类型，一般为4字节
   *  31和91都是整型字面值
   */
  // 初始化变量:在声明变量时就给变量赋一个初始值
  int num = 31;
  // 只初始化了cats变量，未初始化dogs变量，写法很糟糕，不建议这种写法
  int dogs, cats = 91;

  // %d表示转换说明，说明这个位置应有一个int类型的值
  printf("%d 减去 %d 等于 %d\n", num, 2, num - 2);

  /*
   *  八进制与十六进制:
   *  八进制前缀:"0" %o表示八进制转换说明
   *  十六进制前缀:"0x"或"0X" %x表示十六进制转换说明
   */
  printf("num 十进制 = %d\t 八进制 = %o\t 十六进制 = %x\n", num, num,
         num); // 不带前缀
  printf("num 十进制 = %d\t 八进制 = %#o\t 十六进制 = %#x\n", num, num,
         num); // 带前缀

  /*
   *  其他的整型类型:
   *  有符号类型:
   *   short int: 短整型，一般占2字节
   *   long int: 长整型，一般占8字节
   *   long long int:长长整型，至少和long int一样
   *  无符号类型: 在有符号类型前加unsigned关键字
   *  如果是要强调整型为有符号的，则加signed关键字
   */

  /*
   *  当整数超出它能表示的最大数值时，会产生溢出
   *  有符号整型溢出: 最大值 -> 最小值
   *  无符号类型溢出: 最大值 -> 0
   */
  int max_int = 2147483647;
  unsigned u_max_int = 4294967295;

  printf("%d\t%d\t%d\n", max_int, max_int + 1, max_int + 2);
  printf("%u\t%u\t%u\n", u_max_int, u_max_int + 1, u_max_int + 2);

  /*
   *  整型打印转换说明符
   *  short:      有符号 %hd;  无符号 %hu
   *  int:        有符号 %d;   无符号 %u
   *  long:       有符号 %ld;  无符号 %lu
   *  long long:  有符号 %lld; 无符号 %llu
   */
  short s_int = 65535;
  long l_int = 65537;
  long long ll_int = 65538;

  printf("%hd\t%hu\t%#ho\t%#hx\t%b\n", s_int, s_int, s_int, s_int, s_int);
  printf("%ld\t%lu\t%#lo\t%#lx\n", l_int, l_int, l_int, l_int);
  printf("%lld\t%llu\t%#llo\t%#llx\n", ll_int, ll_int, ll_int, ll_int);
}

void char_demo(void) {
  /*
   *  char类型:
   * 字符类型，一般占1字节。以技术角度看，char也是整数类型，在内存中存储的是整数而不是字符。
   */

  // 声明并初始化字符变量
  char ch = 'a';
  // 这样也行，只要不超过字符字节所能表示的范围，但这是一种不好的编程习惯
  char ch_bad = 75;
  // 打印字符，使用转换说明符 "%c"
  printf("%c\t%d\n", ch_bad, ch_bad);

  /*
   *  常见的转义序列
   *  "\a":   警报
   *  "\b":   退格，删除一个字符
   *  "\f":   换页，光标移动至下一页开始处
   *  "\n":   换行，光标移动至下一行开始处
   *  "\r":   回车，光标移动至当前行开始处
   *  "\t":   水平制表符，光标移动至下一个水平制表点
   *  "\v":   垂直制表符，光标移动至下一个垂直制表点
   *  "\\":   反斜杠，显示反斜杠
   *  "\'":   单引号，显示单引号
   *  "\"":   双引号，显示双引号
   *  "\?":   问号，显示问号
   *  "\0oo": 八进制数(oo必须是有效的八进制数)
   *  "\xhh": 十六进制数(hh必须是有效的十六进制数)
   */

  /*
   *  _Bool类型: 表示布尔值，true或false，只占1位存储空间，1表示true，0表示false
   */
}

void portable_type_demo() {
  /*
   *  可移植类型:
   * 为了确保各类型在各种不同的系统中表示的类型相同，c语言提供了两个头文件stdint.h和inttype.h，为现有的类型创建了许多类型别名，在需要的时候查找相关文件进行程序编写
   */
}

void float_demo() {
  /*
   *  浮点数类型:
   *  float:      至少保证6位有效数字，即小数点后6位一般为4字节
   *  double:     至少保证13位有效数字，一般为8字节
   *  long double:有效数字位至少和double一致，至少和double一致
   */

  /*
   *  声明并初始化浮点数
   *  浮点数字面量有不同的写法
   *  可以省略整数部分或小数部分，但不能同时省略两者
   *  默认情况下，编译器假定浮点数是double类型，可以在字面量后面加上后缀，float为f或F，long
   * double为l或L
   */
  float f_num = 3.14f;
  double d_num = 4e7;
  double d_num2 = .8e-5;
  long double ld_num = 31.5L;

  /*
   *  打印转换说明符
   *  float、double: %f, %e以科学计数法形式，%a以十六进制形式
   *  long double: %Lf, %Le, %La
   */
  printf("f_num = %f\t%e\t%a\n", f_num, f_num, f_num);
  printf("d_num = %f\t%e\t%a\n", d_num, d_num, d_num);
  printf("ld_num = %Lf\t%Le\t%La\n", ld_num, ld_num, ld_num);

  /*
   *  浮点数的上溢和下溢:
   *  上溢:
   * 当一个数超出了当前浮点数所能表示的范围，就会发生上溢。会将该值显示为inf或infinity，表示无穷大
   *  下溢:
   * 如果一个数是用float类型精度所能表示的最小数字，如果除以2，因为是最小精度了，所以只能移动尾数，将尾数向右移动，相当于除以10，虽然得到了结果，但已经损失了精度了，这种情况就叫下溢
   * NaN: not a number
   */
  float big_num = 3.4e38 * 100.0f;
  printf("%f\n", big_num);

  /*
   *  浮点数舍入错误:
   *  如果一个数超过了浮点数类型所能表示的最大精度，在运算时就会发生错误
   */
  float a;
  float b;
  float a_pass;
  float b_pass;

  a = 2.0e20 + 1.0;
  a_pass = 2.0e5 + 1.0;
  b = a - 2.0e20;
  b_pass = a_pass - 2.0e5;
  printf("%f\n", b);      // 错误
  printf("%f\n", b_pass); // 正确
}

void complex_and_imaginary_demo(void) {
  /*
   *  复数和虚数类型:
   *  complex类型: float_complex， double_complex，long double_complex
   *  imaginary类型: float_imaginary， double_imaginary， long double_imaginary
   */
  double complex a = 1.0 + 2.0I;
  printf("%.2f + %.2fi\n", creal(a), cimag(a));
  printf("%zd\n", sizeof(a));
}

void flush_print(void) {
  /*
   *  printf()何时将内容发送到屏幕上:
   *  1、printf()将输出发送到一个叫缓冲区(buffer)的区域
   *  2、当缓冲区慢、遇到换行字符或需要输入的时候，将缓冲区的内容发送到屏幕，并清空缓冲区
   */
}
