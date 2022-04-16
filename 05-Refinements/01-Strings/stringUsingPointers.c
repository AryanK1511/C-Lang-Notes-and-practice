#include <stdio.h>

int main()
{
    // Using pointers to define a string instead of using arrays
    char *str = "Aryan Khurana";

    // This allows you to modify the strings
    printf("%s\n", str);

    // Change string
    str = "Hello";
    printf("%s\n", str);
    
    return 0;
}