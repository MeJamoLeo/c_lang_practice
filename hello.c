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
  
  printf("5章\n");
  int right ;
  int left ;
  right = 10;
  left = 4;
  printf("%d\n",right + left);
  printf("%d\n",right - left);
  printf("%d\n",right * left);
  printf("%d\n",right / left);

  printf("5章\n");
  double right_f, left_f; 
  right_f = 10;
  left_f  = 4;
  printf("%f\n",right_f + left_f);
  printf("%f\n",right_f - left_f);
  printf("%f\n",right_f * left_f);
  printf("%f\n",right_f / left_f);
  return 0;
}
