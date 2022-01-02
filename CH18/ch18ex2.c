#include <stdio.h>
#include <string.h>
main()
{
    int i;
    char msg[25];

    printf("Type up to 25 characters and then press Enter...\n");

    for (i=0; i<25; i++)
    {
        msg[i] = getchar();
        if (msg[i]=='\n')
        {
            i--; // Deletes the \n that was just added to msg[i]
            break;
        }
    }

    putchar('\n');

    // i contains the last array subscript entered in the previous loop
    for (; i>=0; i--) 
        putchar(msg[i]);

    putchar('\n');

    return(0);
}