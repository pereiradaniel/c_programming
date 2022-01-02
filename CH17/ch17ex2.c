#include <stdio.h>
#include <stdlib.h> // exist is in this header file!
main()
{
    int choice1, choice2;

    printf("What do you want to see?\n");
    printf("1. 1980's\n");
    printf("2. 1990's\n");
    printf("3. 2000's\n");
    printf("4. Quit\n");
    
    do
    {
        printf("Enter your choice: ");
        scanf(" %d", &choice1);
        switch(choice1)
        {
            // 1980s
            case(1):
            {
                printf("\n\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. Movies\n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1)
                {
                    printf("\n\nWord Series Champions ");
                    printf("of the 80s...");
                    break;
                } else if (choice2 == 2)
                {
                    printf("\n\nMovies ");
                    printf("of the 80s...");
                    break;
                } else if (choice2 == 3)
                {
                    printf("\n\nUS Presidents ");
                    printf("of the 80s...");
                    break;
                } else if (choice2 == 4)
                {
                    exit(1);
                } else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }
            }
            // 1990s

            case(2):
            {
                printf("\n\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. Movies\n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1)
                {
                    printf("\n\nWord Series Champions ");
                    printf("of the 90s...");
                    break;
                } else if (choice2 == 2)
                {
                    printf("\n\nMovies ");
                    printf("of the 90s...");
                    break;
                } else if (choice2 == 3)
                {
                    printf("\n\nUS Presidents ");
                    printf("of the 90s...");
                    break;
                } else if (choice2 == 4)
                {
                    exit(1);
                } else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }
            }

            // 2000's
            case(3):
            {
                printf("\n\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. Movies\n");
                printf("3. US Presidents\n");
                printf("4. Quit\n");

                printf("Enter your choice: ");
                scanf(" %d", &choice2);

                if (choice2 == 1)
                {
                    printf("\n\nWord Series Champions ");
                    printf("of the 2000s...");
                    break;
                } else if (choice2 == 2)
                {
                    printf("\n\nMovies ");
                    printf("of the 2000s...");
                    break;
                } else if (choice2 == 3)
                {
                    printf("\n\nUS Presidents ");
                    printf("of the 2000s...");
                    break;
                } else if (choice2 == 4)
                {
                    exit(1);
                } else
                {
                    printf("Sorry, that is not a valid choice!\n");
                    break;
                }
            }

            case(4):
                exit(1);
            
            default:
                printf("\n%d is not a valid choice.\n", choice1);
                printf("Try again.\n");
                break;
        }
    } while ((choice1<1)||(choice1>4));

    return 0;
}