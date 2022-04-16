#include <stdio.h>

int main()
{
    int n, max = 0, num;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number%d: ", i);
        scanf("%d", &num);
        
        if (num > max) {
            max = num;
        }
    }

    printf("Largest number: %d\n", max);
    return 0;
}