#include <stdio.h>

int main()
{
    // Initializing a file pointer
    FILE *fptr;
    fptr = fopen("main.txt", "r"); // Using the file pointer to open a file using the read mode

    // This reads the whole file character by character
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}