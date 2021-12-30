// Example program #2 from chapter 8
#include <stdio.h>
main()
{
    char topping[24];
    int slices;
    int month, day, year;
    float cost;

    // The first scanf will look for a floating-point variable, the cost.
    // If the user doesn't enter a $ before the cost, it could cause problems.

    printf("How much does a pizza cost in your area?\n");
    printf("Enter as $XX.XX\n");
    scanf(" $%f", &cost);

    // The pizza topping is a string, so your scanf doesn't need an &
    // The character array is a POINTER to an array, and pointers don't
    // require &

    printf("What is your favourite one-word pizza topping?\n");
    scanf(" %s", topping);

    printf("How many slices of %s pizza", topping);
    printf(" can you eat in one sitting?\n");
    scanf(" %d", &slices);

    printf("What is today's date (enter in MM/DD/YY format).\n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
    printf(" and have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost you $%.2f!\n\n\n", cost);
    return 0;
}