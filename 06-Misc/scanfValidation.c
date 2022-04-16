#include <stdio.h>

#define NAME_LEN 30

int main(void)
{
	// Declare and initialize variable to a safe empty state
	char name[NAME_LEN + 1] = { 0 };
	int yearBorn = 0;
	char favLetter = '\0';
	float heightCm = 0.0f;
	int numSuccess = 0;

	// Display instructions
	printf("Input data sequence:  First name, Birth Year, Favourite letter, Height in cm\n");
	printf("Example:  Boris 1962 C 172.5\n\n");

	// Get user input
	printf("Enter your data: ");
	numSuccess = scanf("%30s %d %c %f", name, &yearBorn, &favLetter, &heightCm);

	if (numSuccess == 4) // scanf() returns number of records
	{
		// Display successfully assigned values
		printf("Name  : %s\n", name);
		printf("Born  : %d\n", yearBorn);
		printf("Letter: %c\n", favLetter);
		printf("Height: %.1f cm.\n\n", heightCm);
	}
	else
	{
		printf("ERROR:  Data not entered in the order expected or bad data entered.\n");
	}

	return 0;
}