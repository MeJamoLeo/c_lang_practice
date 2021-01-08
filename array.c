#include <stdio.h>

int main(void)
{
  int array1[] = {42,79,13,75,19};
  int array2[] = {1,2,3,4,5};
  int i;

  int array1_count = sizeof(array1)/sizeof(array1[0]);

  for (i=0; i<array1_count ; i++){
    printf("array1[%d]=%d\n",i,array1[i]);
  }

  // array1の全要素をarray2にコピー
  for (i=0; i<sizeof(array2)/sizeof(array2[0]); i++){
    array2[i] = array1[i];
  }

  for (i=0; i<array1_count ; i++){
    printf("array2[%d]=%d\n",i,array2[i]);
   }

  return 0;
}
