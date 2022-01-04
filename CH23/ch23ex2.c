#include <stdio.h>
main()
{
    int ctr; // Loop counter
    int idSearch, foundID; // Customer to look for (the key)
    int found = 0; // 1(true) if customer is found

    // Define 10 elements in each of the parallel arrays:
    int custID[10] = {313,453,502,101,892,475,792,912,343,633};
    float custBal[10] = {0.00,45.43,71.23,301.56,9.08,192.41,389.00,229.67,18.31,59.54};
    int tempID, inner, outer, didSwap, i; // For sorting
    float tempBal;

    // Sort arrays by customer ID:
    for (outer=0; outer<9; outer++)
    {
        didSwap = 0; // Switch to 1(true) if list is not yet ordered.
        for (inner=outer; inner<10; inner++)
        {
            if (custID[inner]<custID[outer])
            {
                tempID=custID[inner]; // Must switch both arrays
                tempBal=custBal[inner]; // or they are no longer linked.
                custID[inner]=custID[outer];
                custBal[inner]=custBal[outer];
                custID[outer]=tempID;
                custBal[outer]=tempBal;
                didSwap=1; // Swap just took place
                // printf("\nSorting...");
            }
        }
        if (didSwap==0)
        {
            break;
        }  
    }

    // Interact with the user looking to find a balance
    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What is the customer number? ");
    scanf(" %d", &idSearch);

    // Look for the ID in the array:
    for (ctr=0; ctr<10; ctr++)
    {
        if(idSearch==custID[ctr]) // match?
        {
            found = 1; // Set match flag to true
            foundID = ctr; // Set foundID so that can be accessed after loop break
            break;
        }
        if (custID[ctr]>idSearch) // End search
        {
            break;
        }
    }

    // Detect if ID was found or not:
    if (found)
    {
        if(custBal[foundID]>100)
        {
            printf("\n* That customer's balance is $%.2f.\n", custBal[foundID]);
            printf("No additional credit.\n");
        }
        else
        {
            printf("\n* The customer's credit is good! %d\n", custID[foundID]);
        }
    }
    else // ID was not found
    {
        printf("* You have entered an incorrect Customer ID.");
        printf("\n ID %3d was not found in the list.\n", idSearch);
    }



    // DEBUGGING
    for (ctr=0; ctr<10; ctr++) {
        printf("\nCustID: %d, CustBal: %.2f", custID[ctr], custBal[ctr]);
    }

    return 0;
}