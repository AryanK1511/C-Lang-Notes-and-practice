#include <stdio.h>

int main() 
{
    int num, last = 0, sum = 0;
    printf("Enter a number to be checked: ");
    scanf("%d", &num);
    int orig = num;

    while (num > 0) {
        last = num % 10;
        sum += last*last*last;
        num = num / 10;
    }

    if (sum == orig) {
        printf("ARMSTRONG NUMBER\n");
    }
    else {
        printf("NOT an ARMSTRONG NUMBER\n");
    }

    return 0;
}