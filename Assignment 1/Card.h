/****************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #1 : Deck of Cards
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/22/2020
 *****************************************************************************/
#ifndef CARD_H_
#define CARD_H_

#include "myheader.h"
// enum for suit of a card
enum suits {CLUBS,DIAMONDS, HEARTS, SPADES};

// enum for rank of a card
enum ranks{ACE,KINGS,QUEENS,JACKS,TEN,NINE,
	EIGHT,SEVEN,SIX, FIVE,FOUR,THREE, TWO};
/****************************************************************
 * Card - This class represents rank and suit of a card.
 ***************************************************************/
class Card // Base Class
{
public:

	/****************************************************************
	 * Card ();
	 * Default Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Card(); // default constructor

	/****************************************************************
	 * Card ();
	 * Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Card(suits suit, ranks rank); // parameterized constructor

	/****************
	 ** MUTATORS **
	 ****************/
	/*******************************************************************
	 * void setSuit(suits suit);
	 *
	 * Mutator; This method will set suit of a card.
	 *------------------------------------------------------------------
	 * Parameter:  suits suit // IN -  the suit of a card
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setSuit(suits suit);

	/*******************************************************************
	 * void setRank(ranks rank);
	 *
	 * Mutator; This method will set rank of a card.
	 *------------------------------------------------------------------
	 * Parameter:  ranks rank // IN -  the rank of a card
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setRank(ranks rank);

	/***************
	 ** ACCESSORS **
	 ***************/

	/****************************************************************
	 * suits getSuit() const;
	 *
	 * Accessor; This method will return the suit of a card.
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return: suits suit // OUT - the suit of a card
	 *******************************************************************/
	suits getSuit() const;

	/*******************************************************************
	 * ranks getRank() const;
	 *
	 * Accessor; This method will return the rank of a card.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return:  ranks rank // OUT - the rank of a card
	 *******************************************************************/
	ranks getRank() const;

	/*******************************************************************
	 * void print() const;
	 *
	 * Accessor; This method will print a card.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void printCard() const;

private:
	suits suit; // enum - the suit of a card.
	ranks rank; // enum - the rank of a card.
};

#endif /* CARD_H_ */
