#include <stdio.h>

int main()
{
    int n, total = 0, numbers = 0, num;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number%d: ", i);
        scanf("%d", &num);
        total += num;
        numbers++;
    }

    // Calculate average
    double average = total / numbers;
    printf("AVERAGE: %lf\n", average);
    return 0;
}