/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #1 : Deck of Cards
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/22/2020
 *****************************************************************************/
#include "myheader.h"
#include "Card.h"
/******************************************************************************
 * Function printDeck
 * ____________________________________________________________________________
 * This function will print the current deck of cards.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               Card currentDeck[52] - current deck of cards
 *
 * POST-CONDITIONS
 * 	  This function will print the current deck of cards.
 ******************************************************************************/
void printDeck(Card currentDeck[52]) // CALC - current deck of cards
{
	for(int i=0;i<52;i++)
	{
		currentDeck[i].printCard();
	}
}
