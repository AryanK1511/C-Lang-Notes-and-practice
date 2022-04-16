#include <stdio.h>

#define STR_SIZE 8

void clearInputBuffer(void) {
    // Discard all remaining char's from the standard input buffer:
    while (getchar() != '\n')
    {
        ; // do nothing!
    }
}

int main()
{
    // Declaring and initializing C strings
    char str1[] = {'C', 'S', 't', 'r', 'i', 'n', 'g', '1', '\0'};   // Long method
    char str2[] = "CString2";                                       // Auto-sizes to 9 (8 printable characters + null terminator byte)
    char str3[9] = "CString3";                                      // Explicitly sized to 9 (8 printable characters + null terminator byte)
    char str4[STR_SIZE + 1] = "CString4";                           // Macro sizing + 1 for null terminator byte

    // Declaring and initializing C strings to a safe empty state
    char str5[6] = { '\0' };            // Safe empty state (assign null terminator byte)
    char str6[6] = { 0 };               // Same as above, only uses decimal ASCII value
    char str7[STR_SIZE + 1] = { 0 };    // Safe empty state (used for user input later)
    char str8[STR_SIZE + 1] = { 0 };    // Safe empty state (used for user input later)

    // Displaying C strings
    printf("Values of strings:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);
    printf("str5: %s (Empty)\n", str5);
    printf("str6: %s (Empty)\n", str6);

    // C String input
    // printf("Enter str7: ");
    // scanf("%s", str7); // No '&' is required because arrays are essentially pointers that store the address of the first element 
    // clearInputBuffer();
    // printf("str7: %s\n", str7);

    // Protect/respect char array size:
    printf("Enter str7 (enter > 8 chars): ");
    scanf("%8s", str7); // Note: chars > 8 will remain in input buffer!
    clearInputBuffer();
    printf("str7: %s\n", str7);

    // scanf("%s") treats spaces as delimiters and therefore cannot take inputs which contain spaces
    // Getting strings with multiple words
    printf("Enter str7 (enter > 8 chars): ");
    scanf("%8[^\n]s", str8); // Note: chars > 8 will remain in input buffer!
    clearInputBuffer();
    printf("str8: %s\n", str8);

    return 0;
}