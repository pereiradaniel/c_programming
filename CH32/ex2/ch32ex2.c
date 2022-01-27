// This program demonstrates the use of function prototypes

#include <stdio.h>
float compNet(float atomWeight, float factor);

main()
{
    float atomWeight, factor, netWeight;
    printf("What is the atomic weight?: ");
    scanf(" %f", &atomWeight);
    printf("What is the factor? ");
    scanf(" %f", &factor);
    netWeight = compNet(atomWeight, factor);
    printf("The net weight is %.4f\n", netWeight);

    return 0;
}

/**********************************************************************/

float compNet(float atomWeight, float factor)
{
    float netWeight = (atomWeight - factor) * 8;
    return(netWeight);
}