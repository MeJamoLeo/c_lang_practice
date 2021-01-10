#include <stdio.h>

int main(void)
{
  int array[10];
  printf("array__(%p)\n",array);
  printf("array0(%p)\n",&array[0]);
  printf("array1(%p)\n",&array[1]);
  printf("array2(%p)\n",&array[2]);
  
  return 0;
}
