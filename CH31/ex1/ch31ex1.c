// This program demonstrates passing a variable to a function by value.

#include <stdio.h>

main()
{
    int i;

    printf("Please enter an integer...");
    scanf(" %d", &i);

    // Now call the half function, passing the value of i
    half(i);

    // Shows that the function did not alter i's value
    printf("In main(), i is still %d.\n", i);

    return(0); // ends program
}

/**********************************************************************/

half(int i)
{
    i = i / 2;
    printf("Your value halved is %d.\n", i);
    return; // returns to main
}