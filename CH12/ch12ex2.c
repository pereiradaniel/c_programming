// Example program #2 from chapter 12
#include <stdio.h>
main()
{
    // set up an array for the last name and then get it from the user

    char name[25];
    printf("What is your last name?");
    printf("Please capitalize the first letter!\n");
    scanf(" %s", name); // Char array doesn't require the & because it is a pointer!

    if ((name[0] >= 'P')&&(name[0] <= 'S'))
    {
        printf("You must fo to room 2432");
        printf(" for your tickets\n");
    }
    else
    {
        printf("You can get your tickets here.\n");
    }

    return 0;
}