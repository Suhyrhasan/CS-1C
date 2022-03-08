/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #4 : Enhanced Employees
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 02/26/2020
 *****************************************************************************/
#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include "myheader.h"
#include "Date.h"
/******************************************************************
 * Employee - This class represents attributes of empName, empId,
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
			char gender, string title, double salary,string month,
			string day, string year);
	 * Parameterized Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Employee(string empName,string empId,string phoneNum,int age,
			char gender, string title, double salary,string month,
			string day, string year);

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
	Date   HireDate;
	double Salary;
	char   Gender;
	int    Age;
};
/****************************************************************
 * Employee ();
 * Default Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
Employee::Employee()
{
	Date HireDate;
	setName("EMPTY");
	setId("EMPTY");
	setPhoneNumber("EMPTY");
	setAge(0);
	setGender(' ');
	setJobTitle("EMPTY");
	setSalary(0);
	setHireDate(HireDate);
}
/****************************************************************
 * Employee(string empName,string empId,string phoneNum,
		int age, char gender, string title, double salary,
		string month, string day, string year)
 * Parameterized Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
Employee::Employee(string empName,string empId,string phoneNum,
		int age, char gender, string title, double salary,
		string month, string day, string year)
{
	Date HireDate(month, day, year);
	setName(empName);
	setId(empId);
	setPhoneNumber(phoneNum);
	setAge(age);
	setGender(gender);
	setJobTitle(title);
	setSalary(salary);
	setHireDate(HireDate);
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
	EmpName = empName;
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
	EmpId = empId;
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
	PhoneNum = phoneNum;
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
	Age = age;
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
	Gender = gender;
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
	Title = title;
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
	Salary = salary;
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
	HireDate = hireDate;
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

#endif /* EMPLOYEE_H_ */
