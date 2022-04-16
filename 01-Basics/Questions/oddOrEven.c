#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("EVEN NUMBER\n");
    }
    else {
        printf("ODD NUMBER\n");
    }
}