#include <stdio.h>
#include <string.h>

int main()
{
    // 1) strlen(str)
    char name[] = "Aryan Khurana";
    int length = strlen(name);
    printf("Length is: %d\n", length);

    // 2) strcpy(newStr, oldStr): Copies value of old string to new string
    char str1[] = "OldString";
    char str2[] = "NewString";
    strcpy(str1, str2);
    puts(str1);
    puts(str2);

    // 3) strcat(firstStr, secStr): Concatenates first string with second string
    char firstStr[100] = "Hello ";
    char secondStr[] = "World!";
    strcat(firstStr, secondStr);
    puts(firstStr);
    puts(secondStr);

    // 4) strcmp(firstStr, secStr): Compares two strings and returns a value
    // 0: String equal
    // Positive: first > second (ASCII)
    // Negative: first < second (ASCII)
    char first1[] = "ABB";
    char first2[] = "ABD";
    char first3[] = "ABC";
    char second[] = "ABC";

    printf("CASE1: %d\n", strcmp(first1, second)); // String is smaller (ASCII)
    printf("CASE2: %d\n", strcmp(first2, second)); // String is greater (ASCII)
    printf("CASE3: %d\n", strcmp(first3, second)); // String is equal

    return 0;
}