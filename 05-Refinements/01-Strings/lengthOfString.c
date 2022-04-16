#include <stdio.h>
#include <string.h>

int main()
{
    // Initializing variables for counting
    int count = 0, len = 0;

    // Initializing character array
    char name[] = "Aryan Khurana";

    // Method 1: Using string library function
    len = strlen(name);
    printf("Length (Method 1): %d\n", len);

    // Method 2: Using manual counting
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    printf("Length (Method 2): %d\n", count);

    return 0;
}