#include <stdio.h>

int main() 
{
    int num, power, ans = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);

    for (int i = 0; i < power; i++) {
        ans = ans * num;
    }

    printf("ANS: %d\n", ans);
    return 0;
}