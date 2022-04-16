#include <stdio.h>

#define NAME_SIZE 30

struct Product {
    int sku;
    double price;
    char name[NAME_SIZE + 1];
};

int main() {
    const char filename[] = "ProductData.dat";
    struct Product prod[2] = { 0 };
    int i = 0;
    char ch;

    FILE *fp = fopen(filename, "r");

    if (fp != NULL) {
        while (i < 2 && fscanf(fp, "%d|%lf|%30[^\n]%c", &prod[i].sku, &prod[i].price, prod[i].name, &ch) == 4) {
            // Checking if too many chars were existing for the name member (> 30 chars)
            if (ch != '\n') {
                while(fgetc(fp) != '\n'); // This is intentional because we essentially want this to only discard the buffer
            }
            i++;
        }
        fclose(fp);
        fp = NULL;
    }
    else {
        printf("ERROR: Unable to open file for writing. \n");
    }

    // Display the contents of what was read from the file
    for (i = 0; i < 2; i++) {
        printf("Sku: %d, Price: %0.2lf, Product Name: %s\n", prod[i].sku, prod[i].price, prod[i].name);
    }

    return 0;
}