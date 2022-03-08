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
/****************************************************************
 * Card()
 * Default Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
Card::Card()
{
	suit = CLUBS;
	rank = ACE;
}
/****************************************************************
 * Card(suits suit, ranks rank)
 * Parameterized Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
Card::Card(suits suit, ranks rank)
{
	this->suit = suit;
	this->rank = rank;
}
/******************************************************************************
 * Method setSuit : Class Card
 * ____________________________________________________________________________
 *  This method will set suit of a card.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               suits suit - the suit of a card
 *
 * POST-CONDITIONS
 * 	  This function will set suit of a card.
 ******************************************************************************/
void Card::setSuit(suits suit) // IN -  the suit of a card
{
	this->suit = suit;
}
/******************************************************************************
 * Method setRank : Class Card
 * ____________________________________________________________________________
 *  This method will set rank of a card.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               ranks rank -  the suit of a card
 *
 * POST-CONDITIONS
 * 	  This function will set rank of a card.
 ******************************************************************************/
void Card::setRank(ranks rank) // IN - the rank of a card
{
	this->rank = rank;
}
/******************************************************************************
 * Method getSuit : Class Card
 * ____________________________________________________________________________
 *  This method will return the suit of a card.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the suit of a card.
 ******************************************************************************/
suits Card::getSuit() const
{
	return suit;
}
/******************************************************************************
 * Method getRank : Class Card
 * ____________________________________________________________________________
 *  This method will return the rank of a card.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the rank of a card.
 ******************************************************************************/
ranks Card::getRank() const
{
	return rank;
}
/******************************************************************************
 * Method print : Class Card
 * ____________________________________________________________________________
 *  This method will print a card.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will print a card.
 ******************************************************************************/
void Card::printCard() const
{
	switch(rank)
	{
	case ACE:
		cout<<"Ace of ";
		break;
	case KINGS:
		cout<<"King of ";
		break;
	case QUEENS:
		cout<<"Queen of ";
		break;
	case JACKS:
		cout<<"Jack of ";
		break;
	case TEN:
		cout<<"10 of ";
		break;
	case NINE:
		cout<<"9 of ";
		break;
	case EIGHT:
		cout<<"8 of ";
		break;
	case SEVEN:
		cout<<"7 of ";
		break;
	case SIX:
		cout<<"6 of ";
		break;
	case FIVE:
		cout<<"5 of ";
		break;
	case FOUR:
		cout<<"4 of ";
		break;
	case THREE:
		cout<<"3 of ";
		break;
	case TWO:
		cout<<"2 of ";
		break;
	default:
		cout<<"Invalid ";
	}
	switch(suit)
	{
	case CLUBS:
		cout<<"Clubs";
		break;
	case DIAMONDS:
		cout<<"Diamonds";
		break;
	case HEARTS:
		cout<<"Hearts";
		break;
	case SPADES:
		cout<<"Spades";
		break;
	default:
		cout<<"Invalid";
	}
	cout<<endl;
}
