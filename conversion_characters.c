// Conversion characters determine how and where numbers print.

#include <stdio.h>

main ()
{
    printf("%d roses cost %2f per %d\n", 24, 19.95, 12);
    //      24 roses cost 19.95 per 12
    printf("%s %d %f %c\n", "Sam", 14, -8.76, 'X');
    // C insists on using 6 decimal places to print the floating point number even though it is only two.

    // You can control how C prints floating-point values by placing a period and a number between the % and the f of the floating-point conversion character.
    printf("%f  %.3f  %.2f  %.1f", 4.5678, 4.5678, 4.5678, 4.5678);
    // C rounds the floating-point numbers to the number of decimal places.
}

// NOTES
// - Sam requires double quotes because it is a string, while X requires single quotes because it is a char.
