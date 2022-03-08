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
 * Function initialize
 * ____________________________________________________________________________
 * This function will initialize a standard deck of cards.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               Card deck[52] - deck of cards
 *
 * POST-CONDITIONS
 * 	  This function will initialize a standard deck of cards
 ******************************************************************************/
void initialize(Card deck[52]) // IN - deck of cards
{
	int i=0;
	for(int suit=0;suit<4;suit++)
	{
		for(int rank=0;rank<13;rank++)
		{
			deck[i].setSuit((suits)suit);
			deck[i].setRank((ranks)rank);
			i++;
		}
	}
}
