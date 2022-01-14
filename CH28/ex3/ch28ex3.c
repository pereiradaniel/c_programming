#include <stdio.h>
#include <stdlib.h>
FILE* fptr; // Set up the file pointer
main()
{
    fptr=fopen(".\\BookInfo.txt","a");
    if(fptr==0)
    {
        printf("Error eopening the file! Sorry!\n");
        exit(1);
    }
    // Adds the line at the end
    fprintf(fptr, "\nMore books to come!\n");

    fclose(fptr); // Close file
    
    return(0);
}