/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #4 : Enhanced Employees
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 02/26/2020
 *****************************************************************************/
#include "myheader.h"
#include "SoftwareTester.h"
/******************************************************************************
 * FUNCTION passByCopy
 * ____________________________________________________________________________
 * This function will pass by copy.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			  software tester s : Object Name
 *
 * POST-CONDITIONS
 * 	  This function will pass by copy.
 ******************************************************************************/
void passByCopy(SoftwareTester s)
{
	cout <<"Object Passed by Copy.\n";
}
/******************************************************************************
 * FUNCTION passByRefrence
 * ____________________________________________________________________________
 * This function will pass by reference.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			  software tester& s : Object Name
 *
 * POST-CONDITIONS
 * 	  This function will pass by reference.
 ******************************************************************************/
void passByRefrence(SoftwareTester& s)
{
	cout <<"Object Passed by Refrence.\n";
}
/******************************************************************************
 * FUNCTION returnByCopy
 * ____________________________________________________________________________
 * This function will pass by reference.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			  software tester& s : Object Name
 *
 * POST-CONDITIONS
 * 	  This function will return software tester s.
 ******************************************************************************/
SoftwareTester returnByCopy(SoftwareTester& s)
{
	cout <<"Object Returned By Copy.\n";
	return s;
}
/******************************************************************************
 * FUNCTION returnByRefrence
 * ____________________________________________________________________________
 * This function will pass by reference.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			  software tester& s : Object Name
 *
 * POST-CONDITIONS
 * 	  This function will return software tester& s.
 ******************************************************************************/
SoftwareTester& returnByRefrence(SoftwareTester& s)
{
	cout <<"Object Returned By Refrence.\n";
	return s;
}
/******************************************************************************
 * Enhanced Employees
 * ----------------------------------------------------------------------------
 * This program will write and test change address, city, state, and zip code
 * member functions for the SoftwareTester class.Then it write a copy
 * constructor for the SoftwareTester class.Then a deep copy member function
 * for the SoftwareTester class. Then it will change the print SoftwareTester
 * function to display all its data members. Afterward it will change the age
 * and city of a SoftwareTester and test the change methods.
 * ----------------------------------------------------------------------------
 *****************************************************************************/
int main()
{
	// Output header to console
	cout << PrinterHeader("Enhanced Employees", 4, 'A');
	// Output description of the program
	cout << "\nThis program will write and test change address, city, state,\n"
			"and zip code member functions for the SoftwareTester class.Then it\n"
			"write a copy constructor for the SoftwareTester class.Then a deep\n"
			"copy member function for the SoftwareTester class. Then it will\n"
			"change the print SoftwareTester function to display all its data\n"
			"members. Afterward it will change the age and city of a\n"
			"SoftwareTester and test the change methods.\n\n";

	// create and declares objects of SoftwareTester class
	SoftwareTester* softwareTester1 = new SoftwareTester("Joe Calculus", "64879",
			"949-555-1234", 42, 'M', "Math Wiz", 110000, "08", "31", "2017",
			"1234 Main Avenue", "Laguna Niguel", "CA", 92677);

	SoftwareTester* softwareTester2 = new SoftwareTester("Mary Algebra", "76309",
			"213-555-5555", 22, 'F', "Math Helper", 170123, "05", "08", "2017",
			"3333 Marguerite Pkwy", "Mission Viejo", "CA", 92646);

	SoftwareTester* softwareTester3 = new SoftwareTester("Jo Trig", "10192",
			"714-703-1234",39, 'F', "Math Contact", 200000, "12", "25", "2016",
			"9876 Elm Street", "Laguna Niguel", "CA", 92672);
	/****************************************************************************
	 * First - This program will first print all the information related to the
	 *         SoftwareTester class to test all the member functions.
	 ****************************************************************************/
	cout << "\n**********************\n";
	cout <<	"** Software Tester **";
	cout << "\n**********************\n";

	cout <<"\n************************************";
	cout << "***************************************\n";
	softwareTester1->print();
	cout <<"\n************************************";
	cout << "***************************************\n";

	cout <<"\n************************************";
	cout << "***************************************\n";
	softwareTester2->print();
	cout <<"\n************************************";
	cout << "***************************************\n";

	cout <<"\n************************************";
	cout << "***************************************\n";
	softwareTester3->print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	/****************************************************************************
	 * Second - The program will use SoftwareTester class to update software
	 *          tester's information. This class will update the tester's
	 *          age and city. Then it will print the details
	 *          of updated software tester.
	 ****************************************************************************/
	cout <<"\n***********************************************************************\n";
	cout << "Testing change methods for softwareTester3: Testing setAge and setCity\n";
	cout << "**********************************************************************\n";
	softwareTester3->setAge(29);
	softwareTester3->setCity("San Clemente");
	cout <<"\n************************************";
	cout << "***************************************\n";
	softwareTester3->print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	/****************************************************************************
	 * Fourth -The program write a function that passes by copy (the copy
	 *         constructor should be called).Then it will write a function that
	 *         passes by reference.Then a function that returns by copy (the copy
	 *         constructor should be called).Then write a function that returns by
	 *         reference (the copy constructor should not be called).Afterwards
	 *         it will use the initialization construct (the copy constructor should
	 *         be called) and then it will test the deep copy function.
	 ****************************************************************************/
	cout <<"\n************************************\n";
	cout << "Testing the copy constructor:";
	cout <<"\n************************************\n";
	cout <<"When I pass by copy:\n";
	passByCopy(*softwareTester1);

	cout <<"\nWhen I pass by reference:\n";
	passByRefrence(*softwareTester1);

	cout <<"\nWhen I return by copy:\n";
	returnByCopy(*softwareTester1);

	cout <<"\nWhen I return by reference:\n";
	returnByRefrence(*softwareTester1);

	cout << "\n******************************************************************\n";
	cout << "Testing initialization construct:\n"
			"Setting softwareTesterFour = softwareTesterOne\n";
	SoftwareTester softwareTester4 = *softwareTester1;
	cout << "******************************************************************\n";
	cout << "\n******************************************************************\n";
	cout << "Testing my deep copy function: Copying softwareTesterTwo to\n"
			<< "softwareTesterOne,deleting softwareTesterTwo to prove deep copy\n";
	*softwareTester1 = softwareTester1->deepCopy(*softwareTester2);
	delete softwareTester2;
	cout << "******************************************************************\n";
	cout <<"\n************************************";
	cout << "***************************************\n";
	softwareTester1->print();
	cout <<"\n************************************";
	cout << "***************************************\n";

	return 0;
}
