#include <stdio.h>

void weight_to_platinum(void);
void int_demo(void);

int main(void) {
  // weight_to_platinum();
  int_demo();
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
}
