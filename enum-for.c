#include "stdio.h"

// #define MON "星期一"
// #define TUE "星期二"
// #define WED "星期三"
// #define THU "星期四"
// #define FRI "星期五"
// #define SAT "星期六"
// #define SUN "星期日"

enum DAY
{
  MON = 10,
  TUE,
  WED,
  THU,
  FRI,
  SAT,
  SUN
} day;
int main()
{

    printf("1=>%d\n", day);

  for (day = MON; day <= SUN; day++)
  {
    printf("=>%d\n", day);
  }
    printf("2=>%d\n", day);

}
