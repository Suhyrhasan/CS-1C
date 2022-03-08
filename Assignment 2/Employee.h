/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Employee-inheritance
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/27/2020
 *****************************************************************************/
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "myheader.h"
#include "Date.h"
/******************************************************************
 * Employee - This class represents attributes of name, emId,
 *            phoneNum , age, gender, title, salary, and hireDate.
 ******************************************************************/
class Employee
{
public:
	/****************************************************************
	 * Employee ();
	 * Default Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Employee();

	/****************************************************************
	 * Employee(string empName,string empId,string phoneNum,int age,
			char gender, string title, double salary,Date hireDate);
	 * Parameterized Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Employee(string empName,string empId,string phoneNum,int age,
			char gender, string title, double salary,Date hireDate);

	/****************
	 ** MUTATORS **
	 ****************/

	/*******************************************************************
	 * void setName(string empName);
	 *
	 * Mutator; This method will set the employee's name.
	 *------------------------------------------------------------------
	 * Parameter:  string empName // IN - Employee's Name
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setName(string empName);

	/*******************************************************************
	 * void setId(string empId);
	 *
	 * Mutator; This method will set the employee's Id.
	 *------------------------------------------------------------------
	 * Parameter:  string empId // IN - Employee's Id
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setId(string empId);

	/*******************************************************************
	 * void setPhoneNumber(string phoneNum);
	 *
	 * Mutator; This method will set the employee's phone number.
	 *------------------------------------------------------------------
	 * Parameter:  string phoneNum // IN - Employee's Phone Number
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setPhoneNumber(string phoneNum);

	/*******************************************************************
	 * void setAge(int age);
	 *
	 * Mutator; This method will set the employee's age.
	 *------------------------------------------------------------------
	 * Parameter:  int age // IN - Employee's Age
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setAge(int age);

	/*******************************************************************
	 * void setGender(char gender);
	 *
	 * Mutator; This method will set the employee's gender.
	 *------------------------------------------------------------------
	 * Parameter:  char gender // IN - Employee's Gender
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setGender(char gender);

	/*******************************************************************
	 * void setJobTitle(string title);
	 *
	 * Mutator; This method will set the employee's job title.
	 *------------------------------------------------------------------
	 * Parameter:  string title // IN -  Employee's Job Title
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setJobTitle(string title);

	/*******************************************************************
	 * void setSalary(double salary);
	 *
	 * Mutator; This method will set the employee's salary.
	 *------------------------------------------------------------------
	 * Parameter:  double salary // IN - Employee's Salary
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setSalary(double salary);

	/*******************************************************************
	 * void setHireDate(Date hireDate);
	 *
	 * Mutator; This method will set the employee's hire date.
	 *------------------------------------------------------------------
	 * Parameter:  Date hireDate // IN - the employee's hire date
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setHireDate(Date hireDate);

	/***************
	 ** ACCESSORS **
	 ***************/

	/****************************************************************
	 * string getName();
	 *
	 * Accessor; This method will return the employee's name.
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return:  string empName // OUT - Employee's Name
	 *******************************************************************/
	string getName();

	/*******************************************************************
	 * string getId();
	 *
	 * Accessor; This method will return the employee's Id.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: string empId // OUT - Employee's Id
	 *******************************************************************/
	string getId();

	/*******************************************************************
	 * string getPhoneNumber();
	 *
	 * Accessor; This method will return the employee's phone number.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return:   string phoneNum // OUT - Employee's Phone Number
	 *******************************************************************/
	string getPhoneNumber();

	/*******************************************************************
	 * int getAge();
	 *
	 * Accessor; This method will return the employee's age.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return:  int age // OUT - Employee's Age
	 *******************************************************************/
	int getAge();

	/****************************************************************
	 * char getGender();
	 *
	 * Accessor; This method will return the employee's gender.
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return:  char gender // OUT - Employee's Gender
	 *******************************************************************/
	char getGender();

	/*******************************************************************
	 * string getJobTitle();
	 *
	 * Accessor; This method will return the employee's job title.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return:   string title // OUT -  Employee's Job Title
	 *******************************************************************/
	string getJobTitle();

	/*******************************************************************
	 * double getSalary();
	 *
	 * Accessor; This method will return the employee's salary.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: double salary // OUT - Employee's Salary
	 *******************************************************************/
	double getSalary();

	/*******************************************************************
	 * Date getHireDate();
	 *
	 * Accessor; This method will return the employee's hire date.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return:   Date hireDate  // OUT - Employee's Hire Date
	 *******************************************************************/
	Date getHireDate();

	/*******************************************************************
	 * void print();
	 *
	 * Accessor; This method will print the employee details.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void print();

private:
	string EmpName;
	string EmpId;
	string PhoneNum;
	string Title;
	Date HireDate;
	double Salary;
	char Gender;
	int Age;
};
#endif /* EMPLOYEE_H_ */
