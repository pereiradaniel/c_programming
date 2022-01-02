#include <stdio.h>
main()
{
    int i;
    for (i=1;i<=10;i++)
    {
        if ((i%2)==1) // Odd numbers have remained of 1
        {
            printf("Odd\n");
            // Jumps to next iteration of the loop
            continue;
        }
        printf("Even\n");
    }
    return 0;
}