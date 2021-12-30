// Example program #1 from Chapter 6 of
// Absolute Beginner's Guide to C, 3rd Edition
// File Chapter6ex1.c

// This program pairs three kids with their favourite superhero

#include <stdio.h>
#include <string.h>

main()
{
    char Kid1[12]; // Creates a char array 12 bytes size, 11 char name.
    
    // Kid2 will be 7 chars plus a null zero.
    // C compiler will automatically determine the size of the char array
    // and add a null zero.
    char Kid2[] = "Maddie";
    char Kid3[7] = "Andrew"; // This is exactly the same but size is defined.

    char Hero1[] = "Batman";
    char Hero2[34] = "Spiderman";
    char Hero3[25];

    // Define Kid1 one char at a time:
    Kid1[0] = 'K';
    Kid1[1] = 'a';
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0';

    strcpy(Hero3, "The Incredible Hulk");

    printf("%s's favourite hero is %s.\n", Kid1, Hero1);
    printf("%s's favourite hero is %s.\n", Kid2, Hero2);
    printf("%s's favourite hero is %s.\n", Kid3, Hero3);

    return 0;    
}