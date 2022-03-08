/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #1 : Deck of Cards
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/22/2020
 *****************************************************************************/
#include "myheader.h"
/******************************************************************************
 * Deck of Cards
 * ----------------------------------------------------------------------------
 * This program will initialize a deck of cards then perform a perfect
 * shuffle. In the perfect shuffle, the deck is broken exactly in half and
 * rearranged so that the first card is followed by the 27th card, followed
 * by the second card, followed by the 28th card, and so on. Afterwards the
 * program will compare two decks of cards.
 * In the end the program will print out the initial deck, the deck after the
 * first perfect shuffle, the final deck and then how many perfect shuffles
 * are necessary to return the deck to its original configuration.
 * ----------------------------------------------------------------------------
 *****************************************************************************/
int main()
{
	// Output header to console
	cout << PrinterHeader("Deck of Cards", 1, 'A');
	// Output description of the program
	cout << "\n This program will print out the initial deck, the deck after\n"
			" the first perfect shuffle, the final deck and then how many\n"
			" perfect shuffles are necessary to return the deck to its\n"
			" original configuration.\n";
	int n = 0; // CALC & OUT - Number of perfect shuffles
	Card currentDeck[52]; // CALC - current deck of cards
	Card originalDeck[52]; // CALC - original deck of cards
	/****************************************************************************
	 * First Step - Using the function, initialize(), the program will initialize
	 *              a standard deck. Then using a for loop the program will set
	 *              the original deck to initialized deck.
	 ****************************************************************************/
	initialize(currentDeck);
	for(int i=0;i<52;i++)
	{
		originalDeck[i] = currentDeck[i];
	}
	/****************************************************************************
	 * Second Step - Using the function, perfectShuffle() and printDeck(), the
	 *               program will perform a perfect shuffle. Then it will print
	 *               out the initial deck and the deck after the first first
	 *               shuffle.
	 ****************************************************************************/
	perfectShuffle(currentDeck);
	n++;
	cout<<"\nInitial Deck : "<<endl;
	printDeck(originalDeck);
	cout<<"\nAfter first perfect shuffle : DECK"<<endl;
	printDeck(currentDeck);
	/**************************************************************************
	 * Final Step - Using the function, compareDeck() and printDeck(), the
	 *              program will use a while loop that performs perfect shuffle
	 *              until the deck is restored to its original configuration.
	 *              Then it will print out the number of shuffles required and
	 *              the final deck.
	 **************************************************************************/
	while(!compareDecks(originalDeck,currentDeck))
	{
		n++;
		perfectShuffle(currentDeck);
	}
	cout<<"\nNumber of perfect shuffles required to return the\n"
			"deck to its original configuration : "<<n<<endl;
	cout<<"\nFinal Deck : "<<endl;
	printDeck(currentDeck);
	return 0;
}
