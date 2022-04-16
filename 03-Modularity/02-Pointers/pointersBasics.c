#include <stdio.h>

int main()
{
    int a = 5;
    int *p = &a; // Initializing pointer variable

    // Printing all the different cases
    printf("a: %d\n", a);
    printf("*p: %d\n", *p);
    printf("p: %p\n", p);
    printf("&a: %p\n", &a);
    printf("&p: %p\n", &p);

    return 0;
}