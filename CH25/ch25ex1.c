#include <stdio.h>
main()
{
    int i;
    int ctr = 0;
    char ans;

    // Declare array of 3 chars and initialize
    // The movies array contains POINTERS to strings!!!
    char* movies[3] = {"Pale Rider", "High Plains Drifter", "Unforgiven"};
    int movieratings[3]; // Corresponding array of 3 integers for movie ratings
    char* tempmovie = "This will be used to sort rated movies";
    int outer, inner, didSwap, temprating; // for the sort loop

    printf("\n\n*** Oscar Season 2021 is here! ***\n\n");
    printf("Time to rate this year's best picture nominees:");
    for(i=0;i<3;i++)
    {
        printf("\nDid you see %s? (Y/N):", movies[i]);
        scanf(" %c", &ans);
        if((toupper(ans))=='Y')
        {
            printf("\nWhat was your rating on a scale of 1-10: ");
            scanf(" %d", &movieratings[i]);
            ctr++; // Used to print only movies you've seen
            continue;
        }
        else
        {
            movieratings[i] = -1;
        }
    }

    // Sort the movies by rating (unseen will go to bottom)
    for(outer=0;outer<2;outer++)
    {
        didSwap = 0;
        for(inner=outer;inner<3;inner++)
        {
            if(movieratings[inner]>movieratings[outer])
            {
                tempmovie=movies[inner];
                temprating=movieratings[inner];
                movies[inner]=movies[outer];
                movieratings[inner]=movieratings[outer];
                movies[outer]=tempmovie;
                movieratings[outer]=temprating;
                didSwap=1;
            }
        }
        if(didSwap==0)
        {
            break;
        }
    }

    // Print the movies you saw in order
    printf("\n\n** Your movie ratings for the Oscar contenders **\n");
    for(i=0;i<ctr;i++)
    {
        printf("%s rated a %d!\n", movies[i], movieratings[i]);
    }

    return 0;
}