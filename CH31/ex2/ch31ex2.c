// This program demonstrates passing an array to a function

#include <stdio.h>
#include <string.h>

main()
{
    char name[15] = "Fstname Lsname";
    printf("Before change(): %s\n", name);
    change(name);
    printf("Back in main(), the name is now %s.\n", name);
    return(0); // ends the program
}
    /**********************************************************************/

change(char name[15]) // recieves the value of i
{
    // change the string stored at the address pointed to by name
    strcpy(name, "XXXXXXXXXXXXXX");
    return; // return to main
}