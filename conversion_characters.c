// Conversion characters determine how and where numbers print.

#include <stdio.h>

main ()
{
    printf("%d roses cost %2f per %d\n", 24, 19.95, 12);
    //      24 roses cost 19.95 per 12
    printf("%s %d %f %c\n", "Sam", 14, -8.76, 'X');
}