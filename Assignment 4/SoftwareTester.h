/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #4 : Enhanced Employees
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 02/19/2020
 *****************************************************************************/
#ifndef SOFTWARETESTER_H_
#define SOFTWARETESTER_H_
#include "myheader.h"
#include "employee.h"
#include <cstring>
/****************************************************************
 *  SoftwareTester - This class represents attributes of
 *                   software tester's address, city, state and
 *                   zip code.
 ***************************************************************/
// SoftwareTester class: subclass of Employee
class SoftwareTester : public Employee
{
public:
	/****************************************************************
	 *  SoftwareTester();
	 * Default Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	SoftwareTester(); // default constructor

	/****************************************************************
	 * ~SoftwareTester();
	 * Destructor; Frees dynamic memory
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	~SoftwareTester();

	/****************************************************************
	 * SoftwareTester(string empName,string empId, string phoneNum,
			int age, char gender,string title, double salary,
			string month, string day, string year, string address,
			string city, string state, int zipCode);
	 * Parameterized Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	SoftwareTester(string empName,string empId, string phoneNum,
			int age, char gender,string title, double salary,
			string month, string day, string year, string address,
			string city, string state, int zipCode);

	/****************************************************************
	 *softwareTester(softwareTester& other);
	 * copy constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	SoftwareTester(SoftwareTester& other);
	/*******************************************************************
	 * SoftwareTester& deepCopy(SoftwareTester& other);
	 *
	 * Function; deep copy member function
	 *------------------------------------------------------------------
	 * Parameter: SoftwareTester& other // IN -
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	SoftwareTester& deepCopy(SoftwareTester& other);

	/****************
	 ** MUTATORS **
	 ****************/

	/*******************************************************************
	 * void setAddress(string address);
	 *
	 * Mutator; This method will set the software tester’s address
	 *------------------------------------------------------------------
	 * Parameter: string address // IN - the software tester’s address
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setAddress(string address);

	/*******************************************************************
	 * void setCity(string city);
	 *
	 * Mutator; This method will set the software tester’s city
	 *------------------------------------------------------------------
	 * Parameter: string city // IN - the software tester’s city
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setCity(string city);

	/*******************************************************************
	 * void setState(string state);
	 *
	 * Mutator; This method will set the software tester’s state
	 *------------------------------------------------------------------
	 * Parameter: string state // IN - the software tester’s state
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setState(string state);

	/*******************************************************************
	 * void setZipCode(int zipCode);
	 *
	 * Mutator; This method will set the software tester’s zip code
	 *------------------------------------------------------------------
	 * Parameter: int zipCode // IN - the software tester’s zip code
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void setZipCode(int zipCode);

	/***************
	 ** ACCESSORS **
	 ***************/

	/****************************************************************
	 * char *getAddress();
	 *
	 * Accessor; This method will return the software tester’s address
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return: char* address // OUT - the software tester’s address
	 *******************************************************************/
	char *getAddress();

	/****************************************************************
	 * char *getCity();
	 *
	 * Accessor; This method will return the software tester’s city
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return: char* city // OUT - the software tester’s city
	 *******************************************************************/
	char *getCity();

	/****************************************************************
	 * char *getState();
	 *
	 * Accessor; This method will return the software tester’s state
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return: char* state // OUT - the software tester’s state
	 *******************************************************************/
	char *getState();

	/****************************************************************
	 * int getZipCode();
	 *
	 * Accessor; This method will return the software tester’s zipcode
	 * --------------------------------------------------------------
	 * Parameters: none
	 * --------------------------------------------------------------
	 * Return: int zipCode // OUT - the software tester’s zipcode
	 *******************************************************************/
	int getZipCode();

	/*******************************************************************
	 * void print();
	 *
	 * Accessor; This method will print the software tester's details.
	 *------------------------------------------------------------------
	 * Parameters: none
	 *------------------------------------------------------------------
	 * Return: none
	 *******************************************************************/
	void print();
private:
	char* Address;
	char* City;
	char* State;
	int ZipCode;
};
/****************************************************************
 * SoftwareArchitect(): Employee();
 * Default Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ****************************************************************/
SoftwareTester::SoftwareTester()
{
	cout << "Default Constructor Called.\n";
	Date HireDate;
	setName("EMPTY");
	setId("EMPTY");
	setPhoneNumber("EMPTY");
	setAge(0);
	setGender(' ');
	setJobTitle("EMPTY");
	setSalary(0);
	setHireDate(HireDate);

	setAddress("EMPTY");
	setCity("EMPTY");
	setState("EMPTY");
	setZipCode(0);
}
/****************************************************************
 * ~SoftwareTester();
 * Destructor; Frees dynamic memory
 * Parameters: none
 * Return: none
 ***************************************************************/
SoftwareTester::~SoftwareTester()
{
	cout << "Destructor Called.\n";
	delete[]Address;
	delete[]City;
	delete[]State;
}
/****************************************************************
 * SoftwareTester(string empName,string empId,string phoneNum,
 *                int age, char gender,string title,
 *                double salary,string month, string day,
 *                string year,string address,string city,
 *                string state, int zipCode)
 * Parameterized Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
SoftwareTester::SoftwareTester(string empName,string empId,
		string phoneNum, int age, char gender,string title,
		double salary,string month, string day, string year,
		string address,string city, string state, int zipCode)
{
	cout << "Parameterized Constructor Called.\n";
	Date HireDate(month, day, year);
	setName(empName);
	setId(empId);
	setPhoneNumber(phoneNum);
	setAge(age);
	setGender(gender);
	setJobTitle(title);
	setSalary(salary);
	setHireDate(HireDate);

	setAddress(address);
	setCity(city);
	setState(state);
	setZipCode(zipCode);
}
/****************************************************************
 * SoftwareTester(softwareTester& other);
 * Copy Constructor; Initialize class attributes
 * Parameters: none
 * Return: none
 ***************************************************************/
SoftwareTester::SoftwareTester(SoftwareTester& other)
{
	cout << "Copy Constructor Called.\n";
	setName(other.getName());
	setId(other.getId());
	setPhoneNumber(other.getPhoneNumber());
	setAge(other.getAge());
	setGender(other.getGender());
	setJobTitle(other.getJobTitle());
	setSalary(other.getSalary());
	setHireDate(other.getHireDate());

	setAddress(other.getAddress());
	setCity(other.getCity());
	setState(other.getState());
	setZipCode(other.getZipCode());
}
/*******************************************************************
 * SoftwareTester& deepCopy(SoftwareTester& other);
 *
 * Function; deep copy member function
 *------------------------------------------------------------------
 * Parameter: SoftwareTester& other // IN -
 *------------------------------------------------------------------
 * Return: none
 *******************************************************************/
SoftwareTester& SoftwareTester::deepCopy(SoftwareTester& other)
{
	SoftwareTester* temp = new SoftwareTester(other.getName(), other.getId(),
			other.getPhoneNumber(),other.getAge(), other.getGender(),
			other.getJobTitle(),other.getSalary(), other.getHireDate().getMonth(),
			other.getHireDate().getDay(),other.getHireDate().getYear(),
			other.getAddress(), other.getCity(),other.getState(),
			other.getZipCode());
	return *temp;
}

/****************
 ** MUTATORS **
 ****************/

/******************************************************************************
 * Method setAddress: Class SoftwareTester
 * ____________________________________________________________________________
 *  This method will set the software tester’s address.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               string address - the software tester’s address
 *
 * POST-CONDITIONS
 * 	This function will set the software tester’s address.
 ******************************************************************************/
void SoftwareTester::setAddress(string address)
{
	Address = new char[address.length() + 1];
	memcpy(Address, address.c_str(), (address.length() + 1));
}
/******************************************************************************
 * Method setCity: Class SoftwareTester
 * ____________________________________________________________________________
 *  This method will set the software tester’s city.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	              string city - the software tester’s city
 *
 * POST-CONDITIONS
 * 	This function will set the software tester’s city.
 ******************************************************************************/
void SoftwareTester::setCity(string city)
{
	City = new char[city.length() + 1];
	memcpy(City, city.c_str(), (city.length() + 1));
}
/******************************************************************************
 * Method setState: Class SoftwareTester
 * ____________________________________________________________________________
 *  This method will set the software tester’s state.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               string state - the software tester’s state
 *
 * POST-CONDITIONS
 * 	This function will set the software tester’s state.
 ******************************************************************************/
void SoftwareTester::setState(string state)
{
	State = new char[state.length() + 1];
	memcpy(State, state.c_str(), (state.length() + 1));
}
/******************************************************************************
 * Method setZipCode: Class SoftwareTester
 * ____________________________________________________________________________
 *  This method will set the software tester’s zip code.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               int zipCode - the software tester’s zip code
 *
 * POST-CONDITIONS
 * 	This function will set the software tester’s zip code.
 ******************************************************************************/
void SoftwareTester::setZipCode(int zipCode)
{
	ZipCode = zipCode;
}
/***************
 ** ACCESSORS **
 ***************/

/******************************************************************************
 * Method getAddress: Class SoftwareTester
 * ____________________________________________________________________________
 *  This method will return the software tester’s address.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * This function will return the software tester’s address.
 ******************************************************************************/
char *SoftwareTester::getAddress()
{
	return Address;
}
/******************************************************************************
 * Method getCity: Class SoftwareTester
 * ____________________________________________________________________________
 *  This method will return the software tester’s city.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * This function will return the software tester’s city.
 ******************************************************************************/
char *SoftwareTester::getCity()
{
	return City;
}
/******************************************************************************
 * Method getState: Class SoftwareTester
 * ____________________________________________________________________________
 *  This method will return the software tester’s state.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * This function will return the software tester’s state.
 ******************************************************************************/
char *SoftwareTester::getState()
{
	return State;
}
/******************************************************************************
 * Method getZipCode: Class SoftwareTester
 * ____________________________________________________________________________
 *  This method will return the software tester’s zip code.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * This function will return the software tester’s zip code.
 ******************************************************************************/
int SoftwareTester::getZipCode()
{
	return ZipCode;
}
/******************************************************************************
 * Method print : Class SoftwareTester
 * ____________________________________________________________________________
 *  This method will print the software tester details.
 *
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 *
 * POST-CONDITIONS
 * 	This function will print the software tester details.
 ******************************************************************************/
void SoftwareTester::print()
{
	string addy = getAddress();
	string state = getState();
	int line1Width = 28 - addy.size();  // CALC - formats setw
	int line2Width = 33 - state.size();  // CALC - formats setw
	Employee::print();
	cout << "\n----------------------------------------";
	cout << "-----------------------------------\n";
	cout <<"Address: " << Address;
	cout << right << setw(line1Width) << "City: " << City << endl;
	cout <<"State: " << State << left;
	cout << right << setw(line2Width) << "ZipCode: " << ZipCode;
}

#endif /* SOFTWARETESTER_H_ */
