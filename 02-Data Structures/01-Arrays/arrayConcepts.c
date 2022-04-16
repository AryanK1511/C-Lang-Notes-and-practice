#include <stdio.h>

int main(void)
{
    // Array declaration
    // int ar1[5];                                         // Array of 5 ints from 0-4
    // char str[10];                                       // Array of 10 chars from 0-9
    // double d1[] = {2.2, 7.3, 1.9, 8.6};                 // Array of 4 doubles initialized
    // int ar2[3] = {1, 2, 3};                             // Array of 3 ints initialized
    int ar3[3] = {1, 4};                                // Initialized ro 1, 4, 0
    // int ar4[3] = { 0 };                                 // Initialized to 0, 0, 0

    // printing arrays
    for (int i = 0; i < 3; i++) {
        printf("ar3[%d] = %d\n", i, ar3[i]);
    }

    // 2D Arrays
    int twoD[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Printing 2D Arrays
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("twoD[%d][%d] = %d\n", i, j, twoD[i][j]);
        }
    }

    return 0;
}