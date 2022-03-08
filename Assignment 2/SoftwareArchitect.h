/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Employee-inheritance
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/27/2020
 *****************************************************************************/
#ifndef SOFTWAREARCHITECT_H_
#define SOFTWAREARCHITECT_H_
#include "myheader.h"
#include "employee.h"
#include "date.h"
/****************************************************************
 * SoftwareArchitect - This class represents attributes of
 *                     department number,supervisor,last salary
 *                     increment, number of years of experience.
 ***************************************************************/
// SoftwareArchitect class: subclass of Employee
class SoftwareArchitect : public Employee
{
public:
	/****************************************************************
	 * SoftwareArchitect();
	 * Default Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	SoftwareArchitect(); // default constructor

	/****************************************************************
	 * SoftwareArchitect(string empName,string phoneNum,string title,
			string empId, char gender, Date hireDate,double salary,
			int age,int deptNo, string supervisor,double salaryInc,
			int yearsOfExp);
	 * Parameterized Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	SoftwareArchitect(string empName,string empId, string phoneNum,
			int age, char gender,string title, double salary,
			Date hireDate, int deptNo,string supervisor,double salaryInc,
			int yearsOfExp);

	/****************
	 ** MUTATORS **
	 ****************/
	/*******************************************************************
	 * void setDepartmentNumber(int deptNo);
	 *
	 * Mutator; This method will set the software architect employee's
	 *         department number.
	 *------------------------------------------------------------------
	 * Parameter:  int deptNo // IN - the employee's department number
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setDepartmentNumber(int deptNo);

	/*******************************************************************
	 * void setSupervisor(string supervisor);
	 *
	 * Mutator; This method will set the software architect employee's
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
	 * Mutator; This method will set the software architect employee's
	 *          last salary increment.
	 *------------------------------------------------------------------
	 * Parameter: double salaryInc //IN-employee's last salary increment
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setLastSalaryIncrement(double salaryInc);

	/*******************************************************************
	 * void setYearsOfExperience(int yearsOfExp);
	 *
	 * Mutator; This method will set the software architect employee's
	 *          number of years of experience.
	 *------------------------------------------------------------------
	 * Parameter: int yearsOfExp // IN - employee's number of years
	 *                                   of experience
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setYearsOfExperience(int yearsOfExp);

	/***************
	 ** ACCESSORS **
	 ***************/

	/****************************************************************
	 * int getDepartmentNumber();
	 *
	 * Accessor; This method will return the software architect
	 *           employee's department number.
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return: int deptNo // OUT - the employee's department number
	 *******************************************************************/
	int getDepartmentNumber();

	/*******************************************************************
	 * string getSupervisor();
	 *
	 * Accessor; This method will return the software architect
	 *           employee's supervisor's name.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: string supervisor // OUT - employee's supervisor's name.
	 *******************************************************************/
	string getSupervisor();

	/*******************************************************************
	 * double getLastSalaryIncrement();
	 *
	 * Accessor; This method will return the software architect
	 *           employee's last salary increment.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: double salaryInc // OUT -employee's last salary increment
	 *******************************************************************/
	double getLastSalaryIncrement();

	/*******************************************************************
	 * int getYearsOfExperience();
	 *
	 * Accessor; This method will return the software architect
	 *           employee's number of years of experience.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: int yearsOfExp // OUT - employee's number of years of
	 *                                 experience
	 *******************************************************************/
	int getYearsOfExperience();

	/*******************************************************************
	 * void print();
	 *
	 * Accessor; This method will print the software architect employee
	 *           details.
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
	int YearsOfExp;
};
#endif /* SOFTWAREARCHITECT_H_ */
