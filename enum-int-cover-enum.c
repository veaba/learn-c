// 枚举转换看的不是很懂
#include "stdio.h"

// #define MON "星期一"
// #define TUE "星期二"
// #define WED "星期三"
// #define THU "星期四"
// #define FRI "星期五"
// #define SAT "星期六"
// #define SUN "星期日"

int main()
{
  enum day  // 枚举名
  {
    saturday,
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday
  } workday; // 枚举变量，这字段能否省略？

  // int a = 1;
  printf("1-%d \n", workday); // 这里的 workday 是啥？
  // enum day weekend;
  // printf("2-%d \n", workday);

  // weekend = (enum day)a; //类型转换
  // //weekend = a; //错误
  // printf("weekend:%d", weekend);
  // return 0;
}
