// c 存储类
// TODO 
#include <stdio.h>

int count;
extern void write_extern();

int main()
{
  count = 5;
  write_extern();
}

/*

 undefined reference to `write_extern'
collect2.exe: error: ld returned 1 exit status

*/