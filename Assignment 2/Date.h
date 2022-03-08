/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Employee-inheritance
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/27/2020
 *****************************************************************************/
#ifndef DATE_H_
#define DATE_H_
#include "myheader.h"
/****************************************************************
 * Date - This class represents attributes of month, day,
 *         and year.
 ***************************************************************/
class Date // Base Class
{
public:
	/****************************************************************
	 * Date ();
	 * Default Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Date(); // default constructor

	/****************************************************************
	 * Date(int day,int month, int year);
	 * Parameterized Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Date(int day, int month, int year);

	/****************
	 ** MUTATORS **
	 ****************/

	/*******************************************************************
	 * void setDay(int day);
	 *
	 * Mutator; This method will set the day
	 *------------------------------------------------------------------
	 * Parameter:  int day // IN -  the day
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setDay(int day);

	/*******************************************************************
	 * void setMonth(int month);
	 *
	 * Mutator; This method will set the month
	 *------------------------------------------------------------------
	 * Parameter:  int month // IN -  the month
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setMonth(int month);

	/*******************************************************************
	 * void setYear(int year);
	 *
	 * Mutator; This method will set the year
	 *------------------------------------------------------------------
	 * Parameter:  int year // IN -  the year
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setYear(int year);

	/***************
	 ** ACCESSORS **
	 ***************/

	/****************************************************************
	 * int getDay() const;
	 *
	 * Accessor; This method will return the day
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return:  int day // OUT -  the day
	 *******************************************************************/
	int getDay() const;

	/*******************************************************************
	 * int getMonth() const;
	 *
	 * Accessor; This method will return the month
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return:   int month // OUT -  the month
	 *******************************************************************/
	int getMonth() const;

	/*******************************************************************
	 * int getYear() const;
	 *
	 * Accessor; This method will return the year
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return:  int Year // OUT - the year
	 *******************************************************************/
	int getYear() const;

	/*******************************************************************
	 * void printDate() const;
	 *
	 * Accessor; This method will print a date
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void printDate() const;

private:
	int Day;   // int - the day.
	int Month; // int - the month.
	int Year;  // int - the year.
};

#endif /* DATE_H_ */
