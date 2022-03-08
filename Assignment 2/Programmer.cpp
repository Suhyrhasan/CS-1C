/****************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Employee-inheritance
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/27/2020
 ****************************************************************/
#include "myheader.h"
#include "programmer.h"
#include "employee.h"
#include "date.h"
/****************************************************************
 * Programmer(): Employee();calls default constructor of Employee
 * Default Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ****************************************************************/
Programmer::Programmer() : Employee()
{
	DeptNo = 0;
	Supervisor = " ";
	SalaryInc = 0;
	KnowsC = false;
	KnowsJava = false;
}
/****************************************************************
 * Programmer(string empName, string empId, string phoneNum,
 *           int age, char gender, string title,double salary,
 *           Date hireDate, int deptNo, string supervisor,
 *           double salaryInc, bool knowsC,bool knowsJava);
 * Parameterized Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
Programmer::Programmer(string empName, string empId, string phoneNum,
		int age,char gender, string title,double salary, Date hireDate,
		int deptNo, string supervisor,double salaryInc, bool knowsC,
		bool knowsJava)
:Employee(empName, empId, phoneNum, age, gender, title, salary, hireDate)
{
	this->DeptNo     = deptNo;
	this->Supervisor = supervisor;
	this->SalaryInc  = salaryInc;
	this->KnowsC     = knowsC;
	this->KnowsJava  = knowsJava;
}
/******************************************************************************
 * Method setDepartmentNumber : Class Programmer
 * ____________________________________________________________________________
 *  This method will set the programmer employee's department number.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               int deptNo - the employee's department number
 *
 * POST-CONDITIONS
 * 	  This function  will set the programmer employee's department number.
 ******************************************************************************/
void Programmer::setDepartmentNumber(int deptNo)
{
	this->DeptNo = deptNo;
}
/******************************************************************************
 * Method setMonth : Class Programmer
 * ____________________________________________________________________________
 *  This method will set the programmer employee's supervisor's name.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               string supervisor - employee's supervisor's name.
 *
 * POST-CONDITIONS
 * 	  This function will set the programmer employee's supervisor's name.
 ******************************************************************************/
void Programmer::setSupervisor(string supervisor)
{
	this->Supervisor = supervisor;
}
/******************************************************************************
 * Method setLastSalaryIncrement : Class Programmer
 * ____________________________________________________________________________
 *  This method will set the programmer employee's last salary increment.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               double salaryInc - employee's last salary increment
 *
 * POST-CONDITIONS
 * 	  This function will set the programmer employee's last salary increment.
 ******************************************************************************/
void Programmer::setLastSalaryIncrement(double salaryInc)
{
	this->SalaryInc = salaryInc;
}
/******************************************************************************
 * Method setKnowsC : Class Programmer
 * ____________________________________________________________________________
 *  This method will set the programmer employee's knowledge about C++.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               bool knowsC - knowledge about C++
 *
 * POST-CONDITIONS
 * 	  This function will set the programmer employee's knowledge about C++.
 ******************************************************************************/
void Programmer::setKnowsC(bool knowsC)
{
	this->KnowsC = knowsC;
}
/******************************************************************************
 * Method setKnowsJava : Class Programmer
 * ____________________________________________________________________________
 *  This method will set the programmer employee's knowledge about Java.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               bool knowsJava - knowledge about Java
 *
 * POST-CONDITIONS
 * 	  This function will set the programmer employee's knowledge about Java.
 ******************************************************************************/
void Programmer::setKnowsJava(bool knowsJava)
{
	this->KnowsJava = knowsJava;
}
/******************************************************************************
 * Method getDepartmentNumber : Class Programmer
 * ____________________________________________________________________________
 *  This method will return the programmer employee's department number.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the programmer employee's department number.
 ******************************************************************************/
int Programmer::getDepartmentNumber()
{
	return DeptNo;
}
/******************************************************************************
 * Method getSupervisor : Class Programmer
 * ____________________________________________________________________________
 *  This method will return the programmer employee's supervisor's name.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the programmer employee's supervisor's name.
 ******************************************************************************/
string Programmer::getSupervisor()
{
	return Supervisor;
}
/******************************************************************************
 * Method getLastSalaryIncrement : Class Programmer
 * ____________________________________________________________________________
 *  This method will return the programmer employee's last salary increment.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the programmer employee's last salary increment.
 ******************************************************************************/
double Programmer::getLastSalaryIncrement()
{
	return SalaryInc;
}
/******************************************************************************
 * Method getKnowsC : Class Programmer
 * ____________________________________________________________________________
 *  This method will return the programmer employee's knowledge about C++
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the programmer employee's knowledge about C++.
 ******************************************************************************/
bool Programmer::getKnowsC()
{
	return KnowsC;
}
/******************************************************************************
 * Method getKnowsJava : Class Programmer
 * ____________________________________________________________________________
 *  This method will return the programmer employee's knowledge about Java.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the programmer employee's knowledge about Java.
 ******************************************************************************/
bool Programmer::getKnowsJava()
{
	return KnowsJava;
}
/******************************************************************************
 * Method print : Class Programmer
 * ____________________________________________________________________________
 *  This method will print the programmer employee details.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will print the programmer employee details.
 ******************************************************************************/
void Programmer::print()
{
	Employee::print(); // calls Employee's print function
	cout << "\n----------------------------------------";
	cout << "-----------------------------------\n";
	cout <<"Department Number: " << left << setw(7) << DeptNo;
	cout << right << setw(32) << "Supervisor: " << Supervisor;
	cout << "\n----------------------------------------";
	cout << "-----------------------------------\n";
	cout <<"Percentage of last salary increase: " << SalaryInc << "%";
	cout << setw(27) << "Language(s) known: ";
	if((KnowsC) && (KnowsJava))
	{
		cout<<"C++ & Java";
	}else if(KnowsC)
	{
		cout<<"C++";
	}else if(KnowsJava)
	{
		cout<<"Java";
	}else if((!KnowsC) && (!KnowsJava))
	{
		cout<<"None";
	}
}
