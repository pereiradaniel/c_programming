#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    int i, aSize;
    int* randomNums;
    time_t t;

    double total = 0;
    int biggest, smallest;
    float average;

    srand(time(&t));

    printf("How many random numbers do you want in your array? ");
    scanf(" %d", &aSize);

    // Allocate an arry of integers equal to the number of elements requested by the user

    randomNums = (int*) malloc(aSize*sizeof(int));

    // Test to ensure that the array allocated properly
    if (!randomNums)
    {
        printf("Random array allocation failed!\n");
        exit(1);
    }

    // Loop through the array and assign a random number between 1 and 500 to each element

    for (i=0;i<aSize;i++)
    {
        randomNums[i]=(rand()%500)+1;
    }

    // Initialize the biggest and smallest number for comparison

    biggest = 0;
    smallest = 500;

    // Loop through the fileld array, testing for the random numbers that
    // are biggest, smallest, and adding all the numbers together to calculate
    // an average.

    for (i=0;i<aSize;i++)
    {
        total += randomNums[i];
        if(randomNums[i]>biggest)
        {
            biggest = randomNums[i];
        }
        if(randomNums[i]<smallest)
        {
            smallest = randomNums[i];
        }
    }

    average = ((float)total)/((float)aSize);
    printf("The biggest random number is %d.\n", biggest);
    printf("The smallest random number is %d.\n", smallest);
    printf("The average of random numbers is %.2f.\n", average);

    printf("\nRandom nums:\n");
    for(i=0;i<aSize;i++)
    {
        printf("%d, ", randomNums[i]);
    }

    // Deallocate memory using free()
    free(randomNums);

    return 0;
}