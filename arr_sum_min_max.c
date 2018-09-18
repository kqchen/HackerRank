#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the miniMaxSum function below.
void miniMaxSum(int arr_count, int* arr) {
    int i, j, sum_min=0, sum_max=0, temp=0, skip=0;
    for (i=0; i< arr_count; i++) {
        temp=0;
        for (j=0; j<arr_count; j++) {
            if (j != skip) {
                temp+=arr[j];
            }
        }
        if (skip == 0) {
            sum_min = sum_max = temp;
        }
        if (temp < sum_min)
            sum_min = temp;
        else if (temp > sum_max)
            sum_max = temp;
        skip++; 
    }
    printf("%d %d\n", sum_min, sum_max);
}

int main()
{
    int* arr = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        *(arr + i) = i+1;
    }

    int arr_count = 5;

    miniMaxSum(arr_count, arr);

    free(arr);
    return 0;
}
