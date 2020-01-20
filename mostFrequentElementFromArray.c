//This console app is searching the number which appears the most times in the given array consisting of natural numbers only.

#include <stdlib.h>
#include <stdio.h>

//#define numberOfElements 10
//#define arrayElementMaxValue 50
//#define arrayElementAddedValue 10

int main()
{
	int numberOfElements;
	printf("Number of elements: ");
	scanf("%d", &numberOfElements);
	printf("\n");
	int array[numberOfElements], i, j, max, mostCommonElement, currentCount, mostCommonCount = 0, noMostCommon = 0;
	//srand(time(NULL));
	for (i = 0; i < numberOfElements; i++) {
		//array[i] = rand() % arrayElementMaxValue + arrayElementAddedValue;
		printf("%d\t>\t", i + 1);
		scanf("%d", &array[i]);
		//printf("%d\t>\t%d\n", i + 1, array[i]);
	}
	max = array[0];
	for (i = 1; i < numberOfElements; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	printf("\n\nMaximum: %d\n\n", max);
	for (i = 0; i <= max; i++) {
		currentCount = 0;
		for (j = 0; j < numberOfElements; j++)
		{
			if (array[j] == i)
			{
				currentCount++;
			}
		}
		if (currentCount > mostCommonCount)
		{
			noMostCommon = 0;
			mostCommonCount = currentCount;
			mostCommonElement = i;
		}
		else if (currentCount == mostCommonCount)
		{
			noMostCommon = 1;
		}
	}
	if (noMostCommon == 0)
	{
		printf("\nMost common element in the given array is %d, which appeared %d times.\n\n", mostCommonElement, mostCommonCount);
	}
	else
	{
		printf("\nThere is no most common element.\n\n");
	}
}
