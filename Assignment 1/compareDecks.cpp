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
 * Function compareDeck
 * ____________________________________________________________________________
 * This function will compare two standard decks of cards.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	                Card firstDeck[52] - first deck of cards
 * 	                Card secondDeck[52] - second deck of cards
 *
 * POST-CONDITIONS
 * 	  This function will compare two standard decks of cards.
 ******************************************************************************/
bool compareDecks(Card firstDeck[52], // IN & CALC - first deck of cards
		Card secondDeck[52]) // IN & CALC - second deck of cards
{
	for(int i=0;i<52;i++)
	{
		if((firstDeck[i].getSuit() != secondDeck[i].getSuit()) ||
				(firstDeck[i].getRank() != secondDeck[i].getRank()))
			return false;
	}
	return true;
}
