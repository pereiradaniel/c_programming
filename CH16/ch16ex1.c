#include <stdio.h>
main()
{
    int numTest;
    float stTest, avg, total = 0.0;

    // Asks for up to 25 tests

    for (numTest = 0; numTest < 25; numTest++)
    {
        // Get the test scores, check if -1 was entered]
        printf("\nWhat is the next student's test score? ");
        scanf(" %f", &stTest);
        if (stTest < 0.0)
        {
            break;
        }
        total += stTest;
    }

    avg = total / numTest;
    printf("\nThe average is %.1f%%.\n", avg);

    return 0;
}