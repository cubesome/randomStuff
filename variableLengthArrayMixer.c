#include <stdlib.h>
#include <stdio.h>


// Configuration section. Change these data to modify random values and array's lengths.
#define arrayLengthA 12
#define arrayLengthB 4
#define randomNumberMaxA 10
#define randomNumberMaxB 10
#define randomNumberAddedValueA 10
#define randomNumberAddedValueB 20
// End of configuration section.

int main()
{
    int i, arrayLengthMin, arrayLengthMax, A = 0, B = 0, AB = 0;
    int arrayA[arrayLengthA];
    int arrayB[arrayLengthB];
    int arrayAB[arrayLengthA + arrayLengthB];
    srand(time(NULL));
    printf("\nArray A:\n");
    for (i = 0; i < arrayLengthA; i++)
    {
        arrayA[i] = rand() % randomNumberMaxA + randomNumberAddedValueA;
        printf("%d. %d\n", i + 1, arrayA[i]);
    }
    printf("\nArray B:\n");
    for (i = 0; i < arrayLengthB; i++)
    {
        arrayB[i] = rand() % randomNumberMaxB + randomNumberAddedValueB;
        printf("%d. %d\n", i + 1, arrayB[i]);
    }
    if (arrayLengthA < arrayLengthB)
    {
        arrayLengthMin = arrayLengthA;
        arrayLengthMax = arrayLengthB;
    }
    else
    {
        arrayLengthMin = arrayLengthB;
        arrayLengthMax = arrayLengthA;
    }
    for (i = 0; i < arrayLengthMin * 2; i++)
    {
        if (i % 2 == 0)
        {
            printf("A1 ");
            arrayAB[i] = arrayA[A];
            A++;
        }
        else
        {
            printf("B1 ");
            arrayAB[i] = arrayB[B];
            B++;
        }
    }
    AB = arrayLengthMin * 2;
    for (i = 0; i <= arrayLengthMax - arrayLengthMin; i++)
    {
        if (arrayLengthA > arrayLengthB)
        {
            printf("A2 ");
            arrayAB[AB] = arrayA[A];
            A++;
            AB++;
        }
        else
        {
            printf("B2 ");
            arrayAB[AB] = arrayB[B];
            B++;
            AB++;
        }
    }
    printf("\nMixed array:\n");
    for (i = 0; i < arrayLengthA + arrayLengthB; i++)
    {
        printf("\n%d. %d", i + 1, arrayAB[i]);
    }
    return 0;
}
