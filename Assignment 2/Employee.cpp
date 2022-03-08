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
#include "Employee.h"
/****************************************************************
 * Employee ();
 * Default Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
Employee::Employee()
{
	EmpName = " ";
	EmpId = " ";
	PhoneNum = " ";
	Title = " ";
	Gender = ' ';
	Salary = 0;
	Age = 0;
}
/****************************************************************
 * Employee (string name, int emId,int phoneNum , int age,
 *           string gender, string title, double salary,
 *           int hireDate);
 * Parameterized Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
Employee::Employee(string empName,string empId,string phoneNum,
		int age, char gender, string title, double salary,Date hireDate)
{
	this->EmpName = empName;
	this->PhoneNum = phoneNum;
	this->Title = title;
	this->EmpId = empId;
	this->Gender = gender;
	this->HireDate.setDay(hireDate.getDay());
	this->HireDate.setMonth(hireDate.getMonth());
	this->HireDate.setYear(hireDate.getYear());
	this->Salary = salary;
	this->Age = age;
}
/******************************************************************************
 * Method setName : Class Employee
 * ____________________________________________________________________________
 *  This method will set the employee's name.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *                 string empName - Employee's Name
 * POST-CONDITIONS
 * 	  This function will set the employee's name.
 ******************************************************************************/
void Employee::setName(string empName)
{
	this->EmpName = empName;
}
/******************************************************************************
 * Method setName : Class Employee
 * ____________________________________________________________________________
 *  This method will set the employee's Id.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               string empId - Employee's Id
 * POST-CONDITIONS
 * 	  This function will set the employee's Id.
 ******************************************************************************/
void Employee:: setId(string empId)
{
	this->EmpId = empId;
}
/******************************************************************************
 * Method setName : Class Employee
 * ____________________________________________________________________________
 *  This method will set the employee's phone number.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               string phoneNum - Employee's Phone Number
 * POST-CONDITIONS
 * 	  This function will set the employee's phone number.
 ******************************************************************************/
void Employee:: setPhoneNumber(string phoneNum)
{
	this->PhoneNum = phoneNum;
}
/******************************************************************************
 * Method setName : Class Employee
 * ____________________________________________________________________________
 *  This method will set the employee's age.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               int age - Employee's Age
 * POST-CONDITIONS
 * 	  This function will set the employee's age.
 ******************************************************************************/
void Employee:: setAge(int age)
{
	this->Age = age;
}
/******************************************************************************
 * Method setName : Class Employee
 * ____________________________________________________________________________
 *  This method will set the employee's gender.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               char gender - Employee's Gender
 * POST-CONDITIONS
 * 	  This function will set the employee's gender.
 ******************************************************************************/
void Employee:: setGender(char gender)
{
	this->Gender = gender;
}
/******************************************************************************
 * Method setName : Class Employee
 * ____________________________________________________________________________
 *  This method will set the employee's job title.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	                string title - Employee's Job Title
 * POST-CONDITIONS
 * 	  This function will set the employee's job title.
 ******************************************************************************/
void Employee:: setJobTitle(string title)
{
	this->Title = title;
}
/******************************************************************************
 * Method setName : Class Employee
 * ____________________________________________________________________________
 *  This method will set the employee's salary.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               double salary - Employee's Salary
 * POST-CONDITIONS
 * 	  This function will set the employee's salary.
 ******************************************************************************/
void Employee:: setSalary(double salary)
{
	this->Salary = salary;
}
/******************************************************************************
 * Method setName : Class Employee
 * ____________________________________________________________________________
 *  This method will set the employee's hire date.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               Date hireDate - Employee's Hire Date
 * POST-CONDITIONS
 * 	  This function will set the employee's hire date.
 ******************************************************************************/
void Employee:: setHireDate(Date hireDate)
{
	this->HireDate.setDay(hireDate.getDay());
	this->HireDate.setMonth(hireDate.getMonth());
	this->HireDate.setYear(hireDate.getYear());
}
/******************************************************************************
 * Method getName : Class Employee
 * ____________________________________________________________________________
 *  This method will return the employee's name.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the employee's name.
 ******************************************************************************/
string Employee::getName()
{
	return EmpName;
}
/******************************************************************************
 * Method getId : Class Employee
 * ____________________________________________________________________________
 *  This method will return the employee's Id.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the employee's Id.
 ******************************************************************************/
string Employee:: getId()
{
	return EmpId;
}
/******************************************************************************
 * Method getPhoneNumber : Class Employee
 * ____________________________________________________________________________
 *  This method will return the employee's phone number.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will return the employee's phone number.
 ******************************************************************************/
string Employee:: getPhoneNumber()
{
	return PhoneNum;
}
/******************************************************************************
 * Method getAge : Class Employee
 * ____________________________________________________________________________
 *  This method will return the employee's age.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	 This function will return the employee's age.
 ******************************************************************************/
int Employee:: getAge()
{
	return Age;
}
/******************************************************************************
 * Method getGender : Class Employee
 * ____________________________________________________________________________
 *  This method will return the employee's gender.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will return the employee's gender.
 ******************************************************************************/
char Employee::getGender()
{
	return Gender;
}
/******************************************************************************
 * Method getJobTitle : Class Employee
 * ____________________________________________________________________________
 *  This method will return the employee's job title.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will return the employee's job title.
 ******************************************************************************/
string Employee:: getJobTitle()
{
	return Title;
}
/******************************************************************************
 * Method getSalary : Class Employee
 * ____________________________________________________________________________
 *  This method will return the employee's salary.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will return the employee's salary.
 ******************************************************************************/
double Employee::getSalary()
{
	return Salary;
}
/******************************************************************************
 * Method getHireDate : Class Employee
 * ____________________________________________________________________________
 *  This method will return the employee's hire date.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will return the employee's hire date.
 ******************************************************************************/
Date Employee::getHireDate()
{
	return HireDate;
}
/******************************************************************************
 * Method print : Class Employee
 * ____________________________________________________________________________
 *  This method will print the employee details.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will print the the employee details.
 ******************************************************************************/
void Employee::print()
{
	int line1Width = 22 - EmpName.size();  // CALC - formats setw
	int line2Width = 26 - Title.size();    // CALC - formats setw

	cout << "Name: " << right << setw (3) << EmpName;
	cout << setw(line1Width) << "Age: " << right << setw(2) << Age;
	cout << setw(8) << "ID: " <<  EmpId;
	cout << setw(17) << "Phone number: " << PhoneNum << left;
	cout << "\n----------------------------------------";
	cout << "-----------------------------------\n";
	cout << "Job Title: " << right << setw(3) << Title;
	cout << setprecision(9);
	cout << setw(line2Width) << "Salary: $" << Salary;
	cout << setprecision(6);
	cout << setw(14) << "Hire Date: ";
	HireDate.printDate();
	cout << left;
}
