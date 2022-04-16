/*  --------------------------------------------------
	Printf : Formatting
	-------------------------------------------------- */

#include <stdio.h>

#define RECORDS 5
#define DESC_LEN 30

struct Product
{
	int sku;
	int units;
	int minimum;
	float price;
	char description[DESC_LEN + 1]; // Don't forget to account for the null terminator byte!
};

int main(void)
{
	//                                       SKU    Units   Min.    Price		Description
	struct Product product[RECORDS] =	{ 
											{90623,	1,		5,		210.99,		"Canned Beans"}, 
											{25,	30750,	10,		1325.47,	"Aluminum Foil"}, 
											{5,		200,	8,		2.98,		"Doritos Chips - BBQ"}, 
											{6565,	6500,	15,		67.49,		"Orange Juice 6-Pack"},
											{325,	15,		150,	12476.89,	"Bounty Paper Towels"} 
										};

	int i;

	printf("ACME Product Inventory\n\n");
	
	// Header Column alignment (data section should match these widths)
	printf("%-6s %-15s %-5s   %-7s %9s\n", 
		"SKU", 
		"Description", 
		"Units", 
		"Minimum", 
		"Price");

	for (i = 0; i < RECORDS; i++)
	{
		printf("%06d %-12.12s... %5d   %7d %9.2f\n", 
			product[i].sku, 
			product[i].description,
			product[i].units, 
			product[i].minimum, 
			product[i].price);
	}

	return 0;
}