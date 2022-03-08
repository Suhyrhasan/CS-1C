/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #1 : Deck of Cards
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/22/2020
 *****************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_
#include"Card.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include<cstdlib>
using namespace std;


string PrinterHeader(string asName, int asNum, char asType);
/**************************************************************************
 * Function PrinterHeader - This function receives an assignment name, type
 * 						    and number then outputs the appropriate class
 * 						    heading. asType is defaulted to Lab as there
 * 						    are more labs than Assignments. ==> returns
 * 						    nothing - This will output the class heading.
 *************************************************************************/
// function declaration

void initialize(Card deck[52]);
/**************************************************************************
 * Function initialize - This function will initialize a standard deck
 *                       of cards.
 *************************************************************************/
void perfectShuffle(Card currentDeck[52]);
/**************************************************************************
 * Function perfectShuffle - This function will perform a perfect shuffle
 *                           of deck.
 *************************************************************************/
bool compareDecks(Card firstDeck[52], Card secondDeck[52]);
/**************************************************************************
 * Function compareDeck - This function will compare two standard decks
 *                        of cards.
 *************************************************************************/
void printDeck(Card currentDeck[52]);
/**************************************************************************
 * Function printDeck - This function will print the current deck of cards.
 *************************************************************************/

#endif /* MYHEADER_H_ */
