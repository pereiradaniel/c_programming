#include <stdio.h>
#include <string.h>
main()
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favourite[40], least[40];

    favRating = 0;
    leastRating = 10;

    do // loop until number > 0 entered
    {
        printf("How many movies have you seen this year? ");
        scanf(" %d", &numMovies);

        if (numMovies <1)
        {
            printf("No movies! How can you rank them?\nTry again!\n\n");
        }

    } while(numMovies < 1);

    for (ctr = 1; ctr <= numMovies; ctr++)
    {
        printf("\nWhat was the name of the movie? ");
        printf("1-word titles only! ");
        scanf(" %s", movieName);
        printf("On a scale of 1 to 10, what would ");
        printf("you rate it? ");
        scanf(" %d", &rating);

        if(rating > favRating)
        {
            strcpy(favourite, movieName);
            favRating = rating;
        }

        if (rating < leastRating)
        {
            strcpy(least, movieName);
            leastRating = rating;
        }

        printf("\nYour favourite movie was %s.\n", favourite);
        printf("\nYour least favourite movie was %s.\n", least);
    }

    return 0;
}