#include <stdio.h>

void square(int n);
void _square(int* n);

int main()
{
    int number = 4;

    // Calling the "pass by value" function and checking the original value after that
    square(number);
    printf("Number is: %d\n", number);

    // Calling the "pass by address" function and checking the original value after that
    _square(&number);
    printf("Number is: %d\n", number);

    return 0;
}

// Call by Value: We pass the value of variable as the argument
// This basically passes a copy of the actual value and the actual value remains unchanged
void square(int n) {
    n = n * n;
    printf("Square: %d\n", n);
}

// Call by Reference: We pass the address of the variable as the argument
// This basically passes the actual value of the variables and makes changes to it
void _square(int* n) {
    *n = (*n) * (*n);
    printf("Square: %d\n", *n);
}