#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("FACTORS OF %d\n", num);
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}