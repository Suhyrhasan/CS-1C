/****************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Employee-inheritance
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/27/2020
 ****************************************************************/
#include "myheader.h"
#include "date.h"
#include "employee.h"
#include "softwarearchitect.h"
/****************************************************************
 * SoftwareArchitect(): Employee();
 * Default Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ****************************************************************/
SoftwareArchitect::SoftwareArchitect()
{
	DeptNo    = 0;
	Supervisor = " ";
	SalaryInc  = 0;
	YearsOfExp = 0;
}
/****************************************************************
 * SoftwareArchitect(string empName,string phoneNum,string title,
			string empId, char gender, Date hireDate,double salary,
			int age,int deptNo, string supervisor,double salaryInc,
			int yearsOfExp);
 * Parameterized Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
SoftwareArchitect::SoftwareArchitect(string empName,string empId,
		string phoneNum, int age, char gender,string title, double salary,
		Date hireDate, int deptNo,string supervisor,double salaryInc,
		int yearsOfExp)
: Employee(empName, empId, phoneNum, age, gender,title, salary, hireDate)
{
	this->DeptNo     = deptNo;
	this->Supervisor = supervisor;
	this->SalaryInc  = salaryInc;
	this->YearsOfExp = yearsOfExp;
}
/******************************************************************************
 * Method setDepartmentNumber : Class SoftwareArchitect
 * ____________________________________________________________________________
 *  This method will set the software architect employee's department number.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	              int deptNo - the employee's department number
 *
 * POST-CONDITIONS
 * This function will set the software architect employee's department number.
 ******************************************************************************/
void SoftwareArchitect::setDepartmentNumber(int deptNo)
{
	this->DeptNo = deptNo;
}
/******************************************************************************
 * Method setSupervisor : Class SoftwareArchitect
 * ____________________________________________________________________________
 *  This method will set the software architect employee's supervisor's name.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               string supervisor - employee's supervisor's name.
 *
 * POST-CONDITIONS
 * 	This function will set the software architect employee's supervisor's name.
 ******************************************************************************/
void SoftwareArchitect:: setSupervisor(string supervisor)
{
	this->Supervisor = supervisor;
}
/******************************************************************************
 * Method setLastSalaryIncrement : Class SoftwareArchitect
 * ____________________________________________________________________________
 * This method will set the software architect employee's last salary increment.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               double salaryInc - employee's last salary increment
 *
 * POST-CONDITIONS
 *This function will set the software architect employee's last salary increment.
 ******************************************************************************/
void SoftwareArchitect::setLastSalaryIncrement(double salaryInc)
{
	this->SalaryInc = salaryInc;
}
/******************************************************************************
 * Method setYearsOfExperience : Class SoftwareArchitect
 * ____________________________________________________________________________
 *  This method will set the software architect employee's number of years
 *  of experience.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	              int yearsOfExp - employee's number of years  of experience
 *
 * POST-CONDITIONS
 *  This function will set the software architect employee's number of years
 *  of experience.
 ******************************************************************************/
void SoftwareArchitect::setYearsOfExperience(int yearsOfExp)
{
	this->YearsOfExp = yearsOfExp;
}
/******************************************************************************
 * Method getDepartmentNumber : Class SoftwareArchitect
 * ____________________________________________________________________________
 *  This method will return the software architect employee's department number.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * This function will return the software architect employee's department number.
 ******************************************************************************/
int SoftwareArchitect::getDepartmentNumber()
{
	return DeptNo;
}
/******************************************************************************
 * Method getSupervisor : Class SoftwareArchitect
 * ____________________________________________________________________________
 * This method will return the software architect employee's supervisor's name.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 *This function will return the software architect employee's supervisor's name.
 ******************************************************************************/
string SoftwareArchitect::getSupervisor()
{
	return Supervisor;
}
/******************************************************************************
 * Method getLastSalaryIncrement : Class SoftwareArchitect
 * ____________________________________________________________________________
 *  This method will return the software architect employee's last salary
 *  increment.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	  This function will return the software architect employee's last salary
 * 	  increment.
 ******************************************************************************/
double SoftwareArchitect::getLastSalaryIncrement()
{
	return SalaryInc;
}
/******************************************************************************
 * Method getYearsOfExperience : Class SoftwareArchitect
 * ____________________________________________________________________________
 *  This method will return the software architect employee's number of years
 *  of experience.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * This function will return the software architect employee's number of years
 * of experience.
 ******************************************************************************/
int SoftwareArchitect:: getYearsOfExperience()
{
	return YearsOfExp;
}
/******************************************************************************
 * Method print : Class SoftwareArchitect
 * ____________________________________________________________________________
 *  This method will print the software architect employee details.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will print the software architect employee details.
 ******************************************************************************/
void SoftwareArchitect:: print()
{
	Employee::print();
	cout << "\n----------------------------------------";
	cout << "-----------------------------------\n";
	cout <<"Department Number: " << left << setw(7) << DeptNo;
	cout << right << setw(32) << "Supervisor: " << Supervisor;
	cout << "\n----------------------------------------";
	cout << "-----------------------------------\n";
	cout<<"Percentage of last salary increase: " << SalaryInc << "%";
	cout << setw(29) << "Years of experience: " << YearsOfExp;
}
