/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #4 : Enhanced Employees
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/26/2020
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
	 * Date(string month, string day, string year);
	 * Parameterized Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Date(string month, string day, string year);

	/****************
	 ** MUTATORS **
	 ****************/

	/*******************************************************************
	 * void setMonth(string month);
	 *
	 * Mutator; This method will set the month
	 *------------------------------------------------------------------
	 * Parameter:  string month // IN -  the month
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setMonth(string month);

	/*******************************************************************
	 * void setDay(string day);
	 *
	 * Mutator; This method will set the day
	 *------------------------------------------------------------------
	 * Parameter:  string day // IN - the day
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setDay(string day);

	/*******************************************************************
	 * void setYear(string year);
	 *
	 * Mutator; This method will set the year
	 *------------------------------------------------------------------
	 * Parameter:  string year // IN -  the year
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setYear(string year);

	/***************
	 ** ACCESSORS **
	 ***************/

	/*******************************************************************
	 * string getMonth();
	 *
	 * Accessor; This method will return the month
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return:   string month // OUT -  the month
	 *******************************************************************/
	string getMonth();

	/****************************************************************
	 * string getDay();
	 *
	 * Accessor; This method will return the day
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return:  string day // OUT -  the day
	 *******************************************************************/
	string getDay();

	/*******************************************************************
	 * string getYear();
	 *
	 * Accessor; This method will return the year
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return:  string Year // OUT - the year
	 *******************************************************************/
	string getYear();

	/*******************************************************************
	 * void printDate();
	 *
	 * Accessor; This method will print a date
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void printDate();

private:
	string Month; // string - the month.
	string Day;   // string - the day.
	string Year;  // string - the year.
};
/****************************************************************
 * Date ();
 * Default Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ****************************************************************/
Date::Date()
{
	setMonth("N/A");
	setDay("N/A");
	setYear("N/A");
}
/****************************************************************
 * Date(string month,string day, string year)
 * Parameterized Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
Date::Date(string month,string day, string year)
{
	setMonth(month);
	setDay(day);
	setYear(year);
}
/******************************************************************************
 * Method setMonth : Class Date
 * ____________________________________________________________________________
 *  This method will set the month.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               string month - the month
 *
 * POST-CONDITIONS
 * 	  This function will set the month.
 ******************************************************************************/
void Date::setMonth(string month)// IN - the month
{
	Month = month;
}
/******************************************************************************
 * Method setDay : Class Date
 * ____________________________________________________________________________
 *  This method will set the day.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               string day - the day
 *
 * POST-CONDITIONS
 * 	  This function will set the day.
 ******************************************************************************/
void Date::setDay(string day) // IN - the day
{
	Day = day;
}
/******************************************************************************
 * Method setYear : Class Date
 * ____________________________________________________________________________
 *  This method will set the year.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               string year - the year
 *
 * POST-CONDITIONS
 * 	  This function will set the year.
 ******************************************************************************/
void Date::setYear(string year) // IN - the year
{
	Year = year;
}
/******************************************************************************
 * Method getMonth : Class Date
 * ____________________________________________________________________________
 *  This method will return the month.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the month.
 ******************************************************************************/
string Date::getMonth()
{
	return Month;
}
/******************************************************************************
 * Method getDay : Class Date
 * ____________________________________________________________________________
 *  This method will return the day.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the day.
 ******************************************************************************/
string Date::getDay()
{
	return Day;
}
/******************************************************************************
 * Method getYear : Class Date
 * ____________________________________________________________________________
 *  This method will return the year.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the year.
 ******************************************************************************/
string Date::getYear()
{
	return Year;
}
/******************************************************************************
 * Method print : Class Date
 * ____________________________________________________________________________
 *  This method will print the date.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will print the date.
 ******************************************************************************/
void Date::printDate()
{
	cout << getMonth() << '/'<< getDay() << '/'<< getYear();
}

#endif /* DATE_H_ */
