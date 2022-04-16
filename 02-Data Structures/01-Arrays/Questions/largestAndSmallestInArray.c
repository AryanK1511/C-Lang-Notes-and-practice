#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 2, 9, 23, -29, 390, -293, 73, 291, 36};
    int max = arr[0]; // Maximum value
    int min = arr[0]; // Minimum value

    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("MAXIMUM: %d\n", max);
    printf("MINIMUM: %d\n", min);
    return 0;
}