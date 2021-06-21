#include "stdio.h"

int main()
{

  int num;
  printf("a number=>");
  scanf("%d", &num);

  (num % 2 == 0) ? printf("偶数 %d=>", num) : printf("奇数 %d=>", num);
}