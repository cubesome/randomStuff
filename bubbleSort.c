#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

int main() {
    // Initialization of variables and checking the number of numbers to sort.
    int n, i, tmp, j, k, changes;
    printf("Please enter the number of elements: ");
    fflush(stdin);
    scanf("%d", &n);
    system("cls");
    int v[n + 1];

    // Entering numbers to sort.
    printf("Number of the elements to enter: %d\nElements (separated using space): ", n);
	  for (i = 1; i <= n; i++) {
		fflush(stdin);
		scanf("%d", &v[i]);
	}

    // Sorting while displaying the current sequence.
    for (j = 1; j <= n; j++) {
      changes = 0;
      for (i = 1; i < n; i++) {
        if (v[i] > v[i + 1]) {
          tmp = v[i + 1];
          v[i + 1] = v[i];
          v[i] = tmp;
          changes++;
      }

      // Displaying the current sequence of the elements.
      system("cls");
      for (k = 1; k <= n; k++) {
        printf("%d ", v[k]);
      }
      Sleep(50);
    }
    if (changes == 0) {
      j = n + 1;
    }
  }
  printf("\nDone.");
  
  // Displaying the results.
  system("cls");
  printf("\n\nSorted chain: ");
  for (i = 1; i <= n; i++) {
    printf("%d ", v[i]);
  }
  printf("\n\n");
	
  return 0;
}
