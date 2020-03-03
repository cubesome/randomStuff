#include <stdio.h>
#include <stdlib.h>

#define x 10
#define y 5
#define upperLimit 10

int main()
{
  int array[x][y][2], i, j, randomX, randomY;
  srand(time(NULL));
  printf("\n>>> Random numbers:\n\n");
  for (j = 0; j < y; j++)
  {
    for (i = 0; i < x; i++)
    {
      array[i][j][0] = rand() % upperLimit;
      printf(" %d\t", array[i][j][0]);
    }
    printf("\n\n");
  }
  randomX = rand() % x;
  randomY = rand() % y;
  printf("\n\n>>> Random coordinates: X:%d Y:%d\n", randomX, randomY);
  printf("\n\n>>> Not so random numbers anymore:\n\n");
  for (j = 0; j < y; j++)
  {
    for (i = 0; i < x; i++)
    {
      if(abs(i - randomX) > abs(j - randomY))
      {
        array[i][j][1] = abs(i - randomX);
      }
      else
      {
        array[i][j][1] = abs(j - randomY);
      }
      if(abs(i - randomX) == 0 && abs(j - randomY) == 0)
      {
        printf("[%d]\t", array[i][j][1]);
      }
      else
      {
        printf(" %d\t", array[i][j][1]);
      }
    }
    printf("\n\n");
  }
  return 0;
}
