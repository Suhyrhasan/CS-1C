/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Employee-inheritance
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/27/2020
 *****************************************************************************/
#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_
#include "myheader.h"
#include "employee.h"
#include "date.h"
/****************************************************************
 * Programmer - This class represents attributes of department
 *              number,supervisor,last salary increment, knows C,
 *               and knows Java.
 ***************************************************************/
// Programmer class : subclass of Employee
class Programmer: public Employee // Base Class
{
public:

	/****************************************************************
	 * Programmer();
	 * Default Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Programmer();

	/****************************************************************
	 * Programmer(string empName, string empId, string phoneNum,
	 *           int age, char gender, string title,double salary,
	 *           Date hireDate, int deptNo, string supervisor,
	 *           double salaryInc, bool knowsC,bool knowsJava);
	 * Parameterized Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Programmer(string empName, string empId, string phoneNum, int age,
			char gender, string title,double salary, Date hireDate, int deptNo,
			string supervisor,double salaryInc, bool knowsC,bool knowsJava);

	/****************
	 ** MUTATORS **
	 ****************/

	/*******************************************************************
	 * void setDepartmentNumber(int deptNo);
	 *
	 * Mutator; This method will set the programmer employee's
	 *          department number.
	 *------------------------------------------------------------------
	 * Parameter:  int deptNo // IN - the employee's department number
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setDepartmentNumber(int deptNo);

	/*******************************************************************
	 * void setSupervisor(string supervisor);
	 *
	 * Mutator; This method will set the programmer employee's
	 *          supervisor's name.
	 *------------------------------------------------------------------
	 * Parameter: string supervisor //IN - employee's supervisor's name.
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setSupervisor(string supervisor);

	/*******************************************************************
	 * void setLastSalaryIncrement(double salaryInc);
	 *
	 * Mutator; This method will set the programmer employee's last
	 *          salary increment.
	 *------------------------------------------------------------------
	 * Parameter: double salaryInc //IN-employee's last salary increment
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setLastSalaryIncrement(double salaryInc);

	/*******************************************************************
	 * void setKnowsC(bool knowsC);
	 *
	 * Mutator; This method will set the programmer employee's knowledge
	 *          about C++
	 *------------------------------------------------------------------
	 * Parameter:  bool knowsC // IN - knowledge about C++
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setKnowsC(bool knowsC);

	/*******************************************************************
	 * void setKnowsJava(bool knowsJava);
	 *
	 * Mutator; This method will set the programmer employee's knowledge
	 *          about Java
	 *------------------------------------------------------------------
	 * Parameter:  bool knowsJava // IN - knowledge about Java
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setKnowsJava(bool knowsJava);

	/***************
	 ** ACCESSORS **
	 ***************/

	/*******************************************************************
	 * int getDepartmentNumber();
	 *
	 * Mutator; This method will return the programmer employee's
	 *          department number.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: int deptNo // OUT - the employee's department number
	 *******************************************************************/
	int getDepartmentNumber();

	/*******************************************************************
	 * string getSupervisor();
	 *
	 * Mutator; This method will return the programmer employee's
	 *          supervisor's name.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: string supervisor // OUT - employee's supervisor's name.
	 *******************************************************************/
	string getSupervisor();

	/*******************************************************************
	 * double getLastSalaryIncrement();
	 *
	 * Mutator; This method will return the programmer employee's last
	 *          salary increment.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: double salaryInc // OUT - double salaryInc
	 *******************************************************************/
	double getLastSalaryIncrement();

	/*******************************************************************
	 * bool getKnowsC();
	 *
	 * Mutator; This method will return the programmer employee's
	 *          knowledge about C++.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: bool knowsC // OUT - knowledge about C++
	 *******************************************************************/
	bool getKnowsC();

	/*******************************************************************
	 * bool getKnowsJava();
	 *
	 * Mutator; This method will return the programmer employee's
	 *          knowledge about Java.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: bool knowsJava // OUT - knowledge about Java
	 *******************************************************************/
	bool getKnowsJava();

	/*******************************************************************
	 * void print();
	 *
	 * Accessor; This method will print the programmer employee details.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void print();

private:
	int DeptNo;
	string Supervisor;
	double SalaryInc;
	bool KnowsC;
	bool KnowsJava;
};
#endif /* DATE_H_ */
