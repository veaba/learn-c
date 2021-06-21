#include "stdio.h"

void func1(void); // 函数声明

static int count = 20;
int main()
{
  printf("before count=> %d", count);
  while (count--) // Todo?  这里是啥意思？
  {
    func1();
  }
  return 0;
}

void func1(void)
{

  static int thing = 5;
  thing++;
  printf(" thing=> %d,count=> %d\n", thing, count);
}