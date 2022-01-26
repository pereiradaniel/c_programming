// The difference between global variables and local variables.
#include <stdio.h>
int g1 = 10; // global

main()
{
    float l1; // local
    l1 = 9.0;

    printf("g1: %d, l1: %.2f\n", g1, l1); // prints the 1st global and first local
    prAgain(); // calls the first function

    return 0;
}

float g2 = 19.0;

prAgain()
{
    int l2 =5;

    // can't print l1 -- it is local to main
    printf("g2: %d, l2: %.2f %d\n", l2, g2, g1);
}