// This program demonstrates passing a variable to a function by address

#include <stdio.h>

main()
{
    int i;

    printf("Please enter an integer...");
    scanf(" %d", &i);

    // Now call the half function, passing the address of i

    half(&i);
    // Shows that the cuntion did alter i's value
    printf("In main(), i is now %d.\n", i);

    return(0); // end program
}

/**********************************************************************/

half(int* i) // receives the address of i
{
    *i = *i / 2;
    printf("Your value halved is %d.\n", *i);
    return; // returns to main
}