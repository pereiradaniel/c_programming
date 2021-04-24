#include <stdio.h>
main()
{
	// Variables to hold gift prices
	float gift1, gift2, gift3, gift4, gift5;

	// Variable to hold total of all gifts
	float total;

	// Ask for each gift amount:
	printf("How much do you want to spend on your mom? ");
	scanf_s(" %f", &gift1);
	printf("How much do you want to spend on your dad? ");
	scanf_s(" %f", &gift2);
	printf("How much do you want to spend on your sister? ");
	scanf_s(" %f", &gift3);
	printf("How much do you want to spend on your brother? ");
	scanf_s(" %f", &gift4);
	printf("How much do you want to spend on your favourite ");
	printf("C Programming author? ");
	scanf_s(" %f", &gift5);

	total = gift1 + gift2 + gift3 + gift4 + gift5;
	printf("\nThe total you will be spending on gifts is $%.2f", total);
	return 0; // End program
}