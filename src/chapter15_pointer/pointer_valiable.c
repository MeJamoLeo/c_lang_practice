#include <stdio.h>

int main(void)
{
  int *p;
  int i;
  p = &i; //アドレスが入る
  *p = 10;/* 通常変数モードに切り替えたポインタ変数に代入 */

  printf("p=%p\n",p);
  printf("p=%p\n",&i);

  return 0;
}
