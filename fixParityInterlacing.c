#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, last, i;
    printf("How many numbers would you like to input? ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("%d. ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 == 1 && a[i + 1] % 2 == 1))
        {
            a[i + 1] = a[i + 1] + 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\n%d. %d", i + 1, a[i]);
    }
    return 0;
}
