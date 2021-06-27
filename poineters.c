#include "stdio.h"

int main()
{

  int var_n = 100;
  int *p; // define point variable

  // int    *p 整型的指针
  // double *p double 指针
  // float  *p 浮点型的指针
  // char   *p 字符型的指针

  p = &var_n; // 0061FEC8，指针就是内存地址

  printf("1===%d\n", &var_n); // 6422216

  printf("2===>%p\n", p);     // 0061FEC8

  printf("3===>%p\n", *p);    // 00000064
}