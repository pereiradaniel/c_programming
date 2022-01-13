#include <stdio.h>
#include <stdlib.h>
FILE* fptr;
main()
{
    char fileLine[10]; // Will hold each line of input
    fptr = fopen(".\\BookInfo.txt","r");

    if(fptr!=0)
    {
        while(!feof(fptr))
        {
            fgets(fileLine,100,fptr);
            if(!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }
    else
    {
        printf("\nError opening file.\n");
    }
    fclose(fptr); // Always close your files
    return(0);
}