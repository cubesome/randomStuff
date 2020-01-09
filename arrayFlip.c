#include <stdlib.h>
#include <stdio.h>

#define arrayLength 9
#define randomNumberMax 50
#define randomNumberAddedValue 10

int main()
{
    int i, numberHolder;
    int array[arrayLength];
    srand( time( NULL ) );
    printf("\nPierwotny uklad:\n");
    for (i = 0; i < arrayLength; i++)
    {
        array[i] = rand() % randomNumberMax + randomNumberAddedValue;
        printf("%d. %d\n", i + 1, array[i]);
    }
    for (i = 0; i < arrayLength / 2; i++)
    {
        numberHolder = array[i];
        array[i] = array[arrayLength - 1 - i];
        array[arrayLength - 1 - i] = numberHolder;
    }
    printf("\n\nNowy uklad:\n");
    for (i = 0; i < arrayLength; i++)
    {
        printf("%d. %d\n", i + 1, array[i]);
    }
    return 0;
}
