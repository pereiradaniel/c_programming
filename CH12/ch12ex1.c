// Example program #1 from chapter 12
#include <stdio.h>
main()
{
    int planets =8;
    int friends =6;
    int potterBooks = 7;
    int starWars = 6;
    int months = 12;
    int beatles = 4;
    int avengers = 6;
    int baseball = 9;
    int basketball = 5;
    int football = 11;

    // Test whether groups have enough people to make teams

    if ((friends + beatles >= baseball) &&
    (friends + avengers >= football))
    {
        printf("The cast of Friends and the Beatles ");
        printf("could make a baseball team,\n");
        printf("AND the cast of Friends plus the Avengers ");
        printf("could make a football team.\n");
    }
    else
    {
        printf("Either the Friends cannot make a ");
        printf("baseball team with the Fab Four,\n");
        printf("OR they can't make a Gridiron Gang with the ");
        printf("Avengers (or both!)\n");
    }

    if ((starWars <= months) || (potterBooks <= months))
    {
        printf("\nYou could read one Harry Potter book a month,\n");
        printf("and finish them all in less than a year,\n");
        printf("OR you could see one Star Wars movie a month,\n");
        printf("and finish them all in less than a year.\n");
    }
    else
    {
        printf("Neither can happen--too many books or movies,\n");
        printf("Not enough time!\n\n");
    }

    if (!(baseball + basketball > football))
    {
        printf("\nThere are fewer baseball and basketball players\n");
        printf("combined than football players.");
    }
    else
    {
        printf("\nThere are more baseball and basketball players\n");
        printf("combined than football players.");
    }

    return 0;
}