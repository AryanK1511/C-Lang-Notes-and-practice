#include <stdio.h>

void swap(int* n1, int* n2);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    swap(&num1, &num2);

    return 0;
}

void swap(int* n1, int* n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;

    printf("First number: %d\n", *n1);
    printf("Second number: %d\n", *n2);
}