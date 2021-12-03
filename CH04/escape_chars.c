// Chapter 4
// Must always place the include stdio at the beginning of all programs that use the printf() function
#include <stdio.h>
main()
{
    printf("Column A\tColumn B\tColumn C");
    printf("\nMy Computer\'s Beep Sounds Like This: \a!\n");
    printf("\"Letz\bs fix that typo and then show the backslash ");
    printf("character \\\" she said\n");
    return 0;
}
// Different c compilers might produce a different number of tabbed spaces for the \t escape sequence.
// The \b escape character backspaces and overwrites the character in the space.