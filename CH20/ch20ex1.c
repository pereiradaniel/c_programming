#include <stdio.h>
#include <string.h>
#include <math.h>
main()
{
    printf("It's time to do your math homework!\n");
    printf("Section 1: Square Roots\n");
    printf("The square root of 49.0 is %.1f\n", sqrt(49.0));
    printf("The square root of 149.0 is %.1f\n", sqrt(149.0));
    printf("The square root of .149 is %.1f\n", sqrt(.149));

    printf("\n\nSection 2: Powers\n");
    printf("4 raised to the 3rd power is %.1f\n", pow(4.0, 3.0));
    printf("7 raised to the 5th power is %.1f\n", pow(7.0, 5.0));
    printf("34 raised to the 1/2 power is %.1f\n", pow(34.0, .5));

    printf("\n\nSection 3: Trigonometry\n");
    printf("The cosine of a 60-degree angle is %.3f\n", cos((60*(3.14159 / 180.0))));
    
    printf("\n\nSection 4: Log functions\n");
    printf("e raised to 2 is %.3f\n", exp(2));
    printf("The natural log of 5 is %.3f\n", log(5));

    return 0;
}