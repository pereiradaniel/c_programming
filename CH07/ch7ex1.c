// Example program #1 from chapter 7
#include <stdio.h>
#include <string.h>
#include "ch7ex1.h"
main()
{
    int age;
    char childname[14] = "Thomas";
    printf("\n%s have %d kids.\n", FAMILY, KIDS);
    age = 11;
    printf("The oldest, %s, is %d.\n", childname, age);
    strcpy(childname, "Christopher");
    age = 6;
    printf("The middle boy, %s, is %d.\n", childname, age);
    age = 3;
    strcpy(childname, "Benjamin");
    printf("The youngest, %s, is %d.\n", childname, age);

    return 0;
}