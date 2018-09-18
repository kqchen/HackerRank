#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int ar_count, int* ar) {
    int i, cur_high = 0, max_high = 0, blow_count=0;
    for (i=0; i< ar_count; i++) {
        if (i ==0) {
            cur_high=max_high =ar[0];
        } 
        if (ar[i] >= max_high) {
            cur_high = ar[i];
            if (max_high == cur_high)
                blow_count++;
            max_high = cur_high;
        }
    }
    return blow_count;
}

int main()
{
    int ar_count = 4;

    int ar[4] = {4,1,3,4};

    int result = birthdayCakeCandles(ar_count, ar);

    printf("%d\n", result);

    return 0;
}
