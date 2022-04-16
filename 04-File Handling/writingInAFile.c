#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("main.txt", "w");

    // Writing a character in a file using fprintf
    // fprintf(fptr, "%c", 'M');

    // Writing a character in a file using fputc
    fputc('M', fptr);

    fclose(fptr);
    return 0;
}