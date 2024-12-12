// Example poker program from Appendix B of Absolute Beginner's Guide to C, 3rd edition

// This program plays draw poker. Users can play as often as they want, betting
// between 1 and 5, They are dealt 5 cards and then get to choose which cards to
// keep, and which cards to replace. The new hand is then reviewed and the user's
// new bankroll is displayed as they are given the option to continue.

// Header files
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

// Two constants defined for determining whether hands are flushes or straights
#define FALSE 0
#define TRUE 1

// Function prototyping
void printGreeting();
int getBet();
char getSuit(int suit);
char getRank(int rank);
void getFirstHand(int cardRankp[], int cardSuit[]);
void getFinalHand(int cardRank[], int cardSuit[], int finalRank[], int finalSuit[], int ranksinHand[], int suitsinHand[]);
int analyzeHand(int ranksinHand[], int suitsinHand[]);

main()
{
    int bet;
    int bank = 100;
    int i;
    int cardRank[5]; // will be one of 13 values (ace-king)
    int cardSuit[5]; // will be one of 4 values (clubs, diamons, hearts, spades)
    int finalRank[5];
    int finalSuit[5];
    int ranksinHand[13]; // used for evaluating the final hand
    int suitsinHand[4]; // used for evaluating the final hand
    int winnings;
    time_t t;
    char suit, rank, stillPlay;

    // This function is called outside the do..while loop because the greeting
    // only needs to be displayed once, while everything else in main will run
    // multiple times, depending on how many times the user wants to play.

    printGreeting();

    // Loop runs each time the user plays a hand of draw poker

    do {
        bet = getBet();

        srand(time(&t));
        getFirstHand(cardRank, cardSuit);
        printf("Your five cards: \n");
        for(i=0;i<5;i++)
        {
            suit = getSuit(cardSuit[i]);
            rank = getRank(cardRank[i]);
            printf("Card #%d: %c%c\n", i+1, rank, suit);
        }

        // These two arrays are used to figure out the value of the player's hand.
        // However, they must be zeroed out in case the user plays multiple hands

        for(i=0; i<4;i++)
        {
            suitsinHand[i] = 0;
        }

        for(i=0; i<13;i++)
        {
            ranksinHand[i] = 0;
        }
        
        getFinalHand(cardRank, cardSuit, finalRank, finalSuit, ranksinHand, suitsinHand);

        printf("Your five final cards: \n");

        for(i=0; i<5;i++)
        {
            suit = getSuit(finalSuit[i]);
            rank = getRank(finalRank[i]);
            printf("Card #%d: %c%c\n", i+1, rank, suit);
        }

        winnings = analyzeHand(ranksinHand, suitsinHand);
        printf("You won %d!\n", bet*winnings);
        bank = bank - bet + (bet*winnings);
        printf("\nYour bank is now %d.\n", bank);
        printf("\nDo you want to play again? ", bank);
        scanf(" %c", &stillPlay);
    } while (toupper(stillPlay) == 'Y');

    return;
}

/*******************************************************/

// Print a quick greeting as well as tell the users the value of
// different winning hands

void printGreeting()
{

printf("****************************************\n");
printf("\n\n\tWelcome to the Absolute Beginner's Casino\n\n");
printf("\tHome of Video Draw Poker\n\n");
printf("****************************************\n");

printf("Here are the rules:\n");
printf("You start with 100 credits, and you make a bet from");
printf("1 to 5 credits\n");
printf("You are dealt 5 cards, and you then choose which");
printf("cards to keep");
printf("or discard\n");
printf("You want to make the best possible hand.\n");
printf("\nHere is the table for winnings (assuming a ");
printf("bet of 1 credit):");
printf("\nPair\t\t\t\t1 credit");
printf("\nTwo pairs\t\t\t2 credits");
printf("\nThree of a kind\t\t\t3 credits");
printf("\nStraight\t\t\t4 credits");
printf("\nFlush\t\t\t5 credits");
printf("\nFull House\t\t\t8 credits");
printf("\nFour of a Kind\t\t\t10 credits");
printf("\nStraight Flush\t\t\t20 credits");
printf("\n\nHave fun!\n\n");

// Function to deal the first five cards

void getFirstHand(int cardRank[], int cardSuit[]) {
    int i, j;
    int cardDup;

    for (i=0; i<5;i++)
    {
        
    }
}
}