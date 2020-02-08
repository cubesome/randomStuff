#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <stdbool.h>

int main()
{
    // Declaration of the variables.
    int time, a, b, c;
    bool pass = true;

    // Displaying an information about what the program does.
    printf("This program checks whether it is possible to make a triangle out of segments which lengths are given.\n");
    for (time = 5; time >= 0; time--) {
        printf("\r[%d]", time);
        Sleep(1000);
    }
    system("cls");

    // Entering the lengths a, b and c.
    printf("Length a: ");
    fflush(stdin);
    scanf("%d", &a);
    printf("Length b: ");
    fflush(stdin);
    scanf("%d", &b);
    printf("Length c: ");
    fflush(stdin);
    scanf("%d", &c);
    system("cls");

    // Checking triangle's inequalities.
    if (a > b + c) {
        pass = false;
    }
    else if (b > a + c) {
        pass = false;
    }
    else if (c > a + b) {
        pass = false;
    }

    // Communicating the results.
    printf("\n\n\nIt is ");
    if (pass != false) {
        printf("possible");
    }
    else {
        printf("not possible");
    }
    printf(" to make a triangle using segments that have lengths of %d, %d and %d.\n\n\n", a, b, c);
}
