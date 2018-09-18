#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Complete the staircase function below.
void staircase(int n) {
    int i, j, pound = 1;
    for (i =0; i< n; i++) {
        int space = n - pound;
        for (j =0; j < space; j++) {
            printf(" ");
        }
        for (j=0; j<pound; j++) {
            printf("#");
        }
        pound++;
        printf("\n");
    }

    return;
}

int main()
{
    int n =6;
    staircase(n);

    return 0;
}
