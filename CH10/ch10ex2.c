// Example program #2 from chapter 10

// This program increases a counter from 1 to 5, printing updates and then
// counts back down to 1, using compound operators.

#include <stdio.h>
main()
{
    int ctr = 0;

    ctr += 1; // increases counter to 1
    printf("Coutner is at %d.\n", ctr);
    ctr += + 1; // increases counter to 2
    printf("Coutner is at %d.\n", ctr);
    ctr += 1; // increases counter to 3
    printf("Coutner is at %d.\n", ctr);
    ctr += 1; // increases counter to 4
    printf("Coutner is at %d.\n", ctr);
    ctr += 1; // increases counter to 5
    printf("Coutner is at %d.\n", ctr);

    ctr -= 1;
    printf("Coutner is at %d.\n", ctr);
    ctr -= 1;
    printf("Coutner is at %d.\n", ctr);
    ctr -= 1;
    printf("Coutner is at %d.\n", ctr);
    ctr -= 1;
    printf("Coutner is at %d.\n", ctr);

    return 0;
}