// This program demonstrates passing multiple variables to a function

#include <stdio.h>

main()
{
    int i = 10;
    int ctr;
    float x = 20.5;

    int iAry[] = {10, 20, 30, 40, 50};

    puts("Here are main()'s variables before the function:");
    printf("i is %d\n", i);
    printf("x is %.1f\n", x);
    for(ctr=0 ;ctr<5 ;ctr++)
    {
        printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
    }

    // Now call the changeSome function, passing the value of i
    // and the address of x
    changeSome(i, &x, iAry);

    puts("\n\nHere are main()'s variables after the function: ");
    printf("i is %d\n", i);
    printf("x is %.1f\n", x);
    for(ctr=0;ctr<5;ctr++)
    {
        printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
    }

    return(0); // ends program
}

/**********************************************************************/

// Copy by value for int i, pass by address for float* newX, pass by
// address by default for int iAry (because it is an array!)
changeSome(int i, float* newX, int iAry[5])
{
    // All variables are changes, but only the float and the array
    // remain changed when the program returns to main()

    int j;
    i = 47;
    *newX = 97.6; // Same location as x in main

    for(j=0; j<5; j++)
    {
        iAry[j] = 100 + 100*j;
    }

    return; // returns to main
}

// compiler will produce this warning, but still runs:
// ch31ex4.c(54): warning C4033: 'changeSome' must return a value