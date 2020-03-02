#include <stdio.h>
#include <stdlib.h>

#define x 5
#define y 10
#define upperLimit 10

int main(void) {
  int array[x][y], i, j;
  srand(time(NULL));
  printf("\n>>> Full array:\n\n");
  for(i = 0; i < y; i++)
  {
    for(j = 0; j < x; j++)
    {
      array[j][i] = rand() % upperLimit;
      printf("%d\t", array[j][i]);
    }
    printf("\n");
  }
  printf("\n\n>>> Edge only:\n\n");
  for(i = 0; i < y; i++)
  {
    for(j = 0; j < x; j++)
    {
      if(i == 0 || i == y - 1 || j == 0 || j == x - 1)
      {
        printf("%d\t", array[j][i]);
      }
      else
      {
        printf(" \t");
      }
    }
    printf("\n");
  }
  return 0;
}
