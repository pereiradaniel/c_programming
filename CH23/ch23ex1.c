#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    // Seed the random number generator with the current time.
    srand(time(&t));

    // Fill The array with random numbers from 1 to 100.
    for (ctr=0; ctr<10;ctr++)
        nums[ctr]=(rand()%99)+1;

    // List the array before sorting.
    puts("\nHere is the list before the sort:");
    for(ctr=0; ctr<10; ctr++)
        printf("%d\n", nums[ctr]);

    // Sort the array.
    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // Becomes 1 if list is not yet ordered.
        for (inner=outer; inner<10; inner++)
            if (nums[inner] < nums[outer])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        if (didSwap == 0)
            break;
    }

    // List the sorted array:
    puts("\nHere is the list after the sort:");
    for (ctr=0; ctr<10; ctr++)
        printf("%d\n", nums[ctr]);

    return 0;
}