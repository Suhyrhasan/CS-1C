/****************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Employee-inheritance
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/27/2020
 ****************************************************************/
#include "Date.h"
#include "myheader.h"
/****************************************************************
 * Date ();
 * Default Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ****************************************************************/
Date::Date()
{
	Day   = 1;
	Month = 1;
	Year  = 1900;
}
/****************************************************************
 * Date(int aDay,int aMonth, int aYear)
 * Parameterized Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
Date::Date(int day,int month, int year)
{
	this->Day   = day;
	this->Month = month;
	this->Year  = year;
}
/******************************************************************************
 * Method setDay : Class Date
 * ____________________________________________________________________________
 *  This method will set the day.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               int day - the day
 *
 * POST-CONDITIONS
 * 	  This function will the day.
 ******************************************************************************/
void Date::setDay(int day) // IN - the day
{
	this->Day = day;
}
/******************************************************************************
 * Method setMonth : Class Date
 * ____________________________________________________________________________
 *  This method will set the month.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               int month - the month
 *
 * POST-CONDITIONS
 * 	  This function will the month.
 ******************************************************************************/
void Date::setMonth(int month)// IN - the month
{
	this->Month = month;
}
/******************************************************************************
 * Method setYear : Class Date
 * ____________________________________________________________________________
 *  This method will set the year.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               int year - the year
 *
 * POST-CONDITIONS
 * 	  This function will the year.
 ******************************************************************************/
void Date::setYear(int year) // IN - the year
{
	this->Year = year;
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
int Date::getDay() const
{
	return Day;
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
int Date::getMonth() const
{
	return Month;
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
int Date::getYear() const
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
void Date::printDate() const
{
	cout << "(" << Month << '/' << Day << '/' << Year << ")";
}
