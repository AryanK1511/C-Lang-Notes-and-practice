#include <stdio.h>

int main() {
    float price = 100.00;
    float *ptr = &price; // Pointer
    float **pptr = &ptr; // Pointer to Pointer

    printf("Value: %f\n", **pptr); // Value of 'price' variable

    return 0;
}