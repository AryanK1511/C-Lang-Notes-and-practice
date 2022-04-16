#include <stdio.h>
#define ARRAY_LENGTH 10

int main() {
    int arr[ARRAY_LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Array to be reversed
    int rev[ARRAY_LENGTH];

    for (int i = 0; i < ARRAY_LENGTH; i++) {
        rev[ARRAY_LENGTH - i - 1] = arr[i];
    }

    // Print the reversed array
    for (int j = 0; j < ARRAY_LENGTH; j++) {
        printf("%d\t", rev[j]);
    }

    printf("\n");
    return 0;
}