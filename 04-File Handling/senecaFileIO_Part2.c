#include <stdio.h>

#define NAME_SIZE 30

struct Product {
    int sku;
    double price;
    char name[NAME_SIZE + 1];
};

int main() {
    const char filename[] = "ProductData.dat";
    struct Product prod = {2000, 588.90, "Candy Bar"};

    FILE *fp = fopen(filename, "a");

    if (fp != NULL) {
        fprintf(fp, "%d|%.2lf|%s\n", prod.sku, prod.price, prod.name);
        fclose(fp);
        fp = NULL;
    }
    else {
        printf("ERROR: Unable to open file for writing. \n");
    }

    return 0;
}