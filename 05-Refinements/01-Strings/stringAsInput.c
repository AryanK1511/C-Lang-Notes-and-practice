#include <stdio.h>

int main() {
    char name[100];

    // Using scanf() with %s to take string as input
    // scanf() cannot track spaces
    // printf("Enter your name: ");
    // scanf("%s", name);
    // printf("Your name is %s\n", name);

    // To avoid space problem use fgets(str, n, file). Do not use gets(str) as it is deprecated
    // puts(str) outputs the string
    printf("Enter your name: ");
    // gets(name);
    fgets(name, sizeof(name), stdin);
    puts(name);

    // You can also use rule delimited set to take characters as you want
    // scanf("%[^\n]", name);
    // scanf("%10[^\n]", name);

    return 0;
}