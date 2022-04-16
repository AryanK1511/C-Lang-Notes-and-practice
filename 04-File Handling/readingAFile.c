#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("main.txt", "r");

    // Reading a character using fscanf
    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);

    // Reading a character using fgetc
    char ch = fgetc(fptr);
    printf("character = %c\n", ch);


    fclose(fptr);
    return 0;
}