#include <stdio.h>
#include <string.h>
#include <ctype.h>
main()
{
    int i;
    int hasUpper, hasLower, hasDigit;
    char user[25], password[25];

    // Initialize all three test variables to 0/false.
    hasUpper = hasLower = hasDigit = 0;

    printf("What is your username? ");
    scanf(" %s", user);

    printf("Please create a password: ");
    scanf(" %s", password);

    for (i = 0; i < strlen(password); i++)
    {
        if(isdigit(password[i]))
        {
            hasDigit = 1;
            continue;
        }
        if(isupper(password[i]))
        {
            hasUpper = 1;
            continue;
        }
        if(islower(password[i]))
        {
            hasLower = 1;
        }
    }
    if((hasDigit)&&(hasUpper)&&(hasLower))
    {
        printf("\n\nPassword is secure.");
        printf("\nYour password has upper and lowercase letters ");
        printf("and a number.");
    }
    else
    {
        printf("\n\nPassword is not secure, %s.\n", user);
        printf("\nUse upper and lowercase letters ");
        printf("and at least one number.");
    }
    return 0;
}