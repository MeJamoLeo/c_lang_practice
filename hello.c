#include <stdio.h>
int main(void){
  printf("Hello\nWorld\n");
  printf("MacOS\tApple\n");

  printf("2章\n");
  printf("%d+%d=%d\n",100,200,300);
  printf("%d\n",100+200);

  printf("3章\n");
  printf("%f\n",10.0 + 3.0);
  printf("%f\n",10.0 - 3.0);
  printf("%f\n",10.0 * 3.0);
  printf("%f\n",10.0 / 3.0);
  // printf("%f\n",10.0 % 3.0); // コンパイルする前にエラーを教えてくれる.
  return 0;
}
