// Example program #1 from chapter 8
#include <stdio.h>
main()
{
    // Set up the variables that scanf will fill

    char firstInitial;
    char lastInitial;
    int age;
    int favourite_number;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial); // &firstInitial is the memory address of that variable

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What is your favourite number (integer only)?\n");
    scanf(" %d", &favourite_number);

    printf("\nYour initials are %c.%c. and you are %d years old.", firstInitial, lastInitial, age);
    printf("\nYour favourite number is %d.\n\n", favourite_number);

    return 0;
}