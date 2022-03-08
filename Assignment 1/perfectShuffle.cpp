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
 * Function perfectShuffle
 * ______________________________________________________________________________
 * This function will perform a perfect shuffle of deck.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	                Card deck[52] - deck of cards
 *
 * POST-CONDITIONS
 * 	  This function will perform a perfect shuffle of deck.
 ******************************************************************************/
void perfectShuffle(Card currentDeck[52]) // CALC - deck of cards
{
	/****************************************************************************
	 * In the perfect shuffle, the deck is broken exactly in half and rearranged
	 * so that the first card is followed by the 27th card, followed by the
	 * second card, followed by the 28th card, and so on.
	 ****************************************************************************/
	int n=0;
	Card tempDeck[52];
	for(int i=0, j=26;i<52/2;i++,j++)
	{
		tempDeck[n] = currentDeck[i];
		n++;
		tempDeck[n] = currentDeck[j];
		n++;
	}
	for(int i=0;i<52;i++)
	{
		currentDeck[i] = tempDeck[i];
	}
}
