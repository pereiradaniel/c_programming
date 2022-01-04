#include <stdio.h>
main()
{
    int ctr;
    int idSearch;
    int found = 0; // Will be 1/true if customer is found.

    int custID[10] = {313,453,502,101,892,475,792,912,343,633};
    float custBal[10] = {0.00,45.43,71.23,301.56,9.08,192.41,389.00,229.67,18.31,59.54};

    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What customer number do you need to check? ");
    scanf(" %d", &idSearch);

    for (ctr=0; ctr<10; ctr++)
    {
        if (idSearch==custID[ctr])
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        if(custBal[ctr] > 100.00)
        {
            printf("\n** That customer's balance is $%.2f\n", custBal[ctr]);
        }
        else
        {
            printf("\n** The customer's credit is good!\n");
        }
    }
    else
    {
        printf("** Incorrect customer ID.");
        printf("\n ID %3d was not found in list.\n", idSearch);
    }
    
    return 0;   
}