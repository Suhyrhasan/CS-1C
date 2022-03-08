/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #10: Recursion
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 04/06/2020
 *****************************************************************************/
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;
/******************************************************************************
 * FUNCTION PrinterHeader
 * ____________________________________________________________________________
 * This function receives an assignment name, type and number then
 * 		outputs the appropriate class heading. asType is defaulted to Lab
 * 		as there are more labs than Assignments.
 * 		==> returns nothing - This will output the class heading.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			  asName : Assignment Name
 * 	  			  asNum  : Assignment Number
 *				  asType : Assignment Type ==> THIS SHOULD CONTAIN:
 *				  							   'L' for Labs
 *				  							   'A' for Assignments
 * POST-CONDITIONS
 * 	  This function will output the class heading.
 ******************************************************************************/
string PrinterHeader(string asName,    // IN - Assignment Name
		int asNum,                    // IN - Assignment Number
		char asType)                   // IN - Assignment Type ('L' = Lab,
//                       'A' = Assignment)
{
	ostringstream output;
	output << left;
	output << "*****************************************************\n";
	output << "*  PROGRAMMED BY : Suhyr Hasan \n";
	output << "*  " << setw(14) << "STUDENT IDs" << ": 1022520 \n";
	output << "*  " << setw(14) << "CLASS" << ": CS1C - MW - 5:00pm - 7:30pm\n";
	output << "*  ";

	// PROCESSING - This will adjust setws and format appropriately based
	//              based on if this is a lab 'L' or assignment.

	if (toupper(asType) == 'L')
	{
		output << "LAB #" << setw(9);
	}else{
		output << "ASSIGNMENT #" << setw(2);
	}
	output << asNum << ": " << asName << endl;
	output << "*****************************************************\n";
	output << right;
	return output.str();
}
/******************************************************************************
 * FUNCTION reverse
 * ____________________________________________________________________________
 * This recursive function will reverse the characters in a string given two
 * indices (starting and ending).
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			   string &str : passed string for recursive function
 * 	  			   int x       : passed integer for the first index
 * 	  			   int y       : passed integer for the last index
 * POST-CONDITIONS
 * 	  This recursive function will reverse the characters in a string given two
 *    indices (starting and ending).
 ******************************************************************************/
void reverse(string &str, int x, int y)
{
	//base case
	if (x >= y)
		return;
	swap(str.at(x), str.at(y));
	reverse(str, x + 1, y - 1);
}
/******************************************************************************
 * FUNCTION swap
 * ____________________________________________________________________________
 * This function will swap letters.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	               x - passed char for the first index
 * 	               y - passed char for the last index
 * POST-CONDITIONS
 * 	  This function will swap letters.
 ******************************************************************************/
void swap(char& x, char& y)
{
	char temp = x;
	x = y;
	y = temp;
}
/******************************************************************************
 * Recursion
 * ----------------------------------------------------------------------------
 * This program will obtain the following string:'abcdefghijklmnopqrstuvwxyz'
 * then it will use a reverse function that reverses the characters in a string
 * given two indices (starting and ending).The string will reflect the reversal.
 * ----------------------------------------------------------------------------
 *****************************************************************************/
int main()
{
	// Output header to console
	cout << PrinterHeader("Recursion", 10, 'A');
	// Output description of the program
	cout << "\n This program will obtain the following string:\n"
			" 'abcdefghijklmnopqrstuvwxyz' then it will use a\n"
			" reverse function that reverses the characters in\n"
			" a string given two indices (starting and ending).\n"
			" The string will reflect the reversal.\n";
	/*****************************************************************************
	 * First - This program will read indices as input then call the reverse
	 *         function to reverse letters 12,19.
	 *
	 *         Example : Enter Starting Index: 12
	 *                   Enter Ending Index:   19
	 *                   After reversal: abcdefghijksrqponmltuvwxyz
	 *****************************************************************************/
	cout << "\n+++++++++++++++\n";
	cout << "  First Index    ";
	cout << "\n+++++++++++++++\n";
	cout << "++++++++++++++++++++++++++++++++++++"
			"++++++++++++++++++++++++++++++++++\n";
	string alphabetOne = "abcdefghijklmnopqrstuvwxyz";
	int firstStartingIndex,firstEndingIndex;
	cout << "Enter Starting Index: ";
	cin >> firstStartingIndex;
	cout << "Enter Ending Index:   ";
	cin >> firstEndingIndex;
	reverse(alphabetOne, firstStartingIndex - 1, firstEndingIndex - 1);
	cout << "\nAfter reversal: " << alphabetOne;
	cout << "\n++++++++++++++++++++++++++++++++++++"
			"++++++++++++++++++++++++++++++++++\n";
	/*****************************************************************************
	 * Second - This program will read indices as input then call the reverse
	 *          function to reverse letters 5,23.
	 *
	 *          Example : Enter Starting Index: 5
	 *                    Enter Ending Index:   23
	 *                     After reversal: abcdwvutsrqponmlkjihgfexyz
	 *****************************************************************************/
	cout << "\n++++++++++++++++\n";
	cout << "  Second Index    ";
	cout << "\n++++++++++++++++\n";
	cout << "++++++++++++++++++++++++++++++++++++"
			"++++++++++++++++++++++++++++++++++\n";
	string alphabetTwo = "abcdefghijklmnopqrstuvwxyz";
	int secondStartingIndex,secondEndingIndex;
	cout << "Enter Starting Index: ";
	cin >> secondStartingIndex;
	cout << "Enter Ending Index:   ";
	cin >> secondEndingIndex;
	reverse(alphabetTwo, secondStartingIndex - 1, secondEndingIndex - 1);
	cout << "\nAfter reversal: " << alphabetTwo;
	cout << "\n++++++++++++++++++++++++++++++++++++"
			"++++++++++++++++++++++++++++++++++\n";
	/*****************************************************************************
	 * Third - This program will read indices as input then call the reverse
	 *         function to reverse letters 1,26.
	 *
	 *         Example : Enter Starting Index: 1
	 *                   Enter Ending Index:   26
	 *                   After reversal: zyxwvutsrqponmlkjihgfedcba
	 *****************************************************************************/
	cout << "\n+++++++++++++++\n";
	cout << "  Third Index    ";
	cout << "\n+++++++++++++++\n";
	cout << "++++++++++++++++++++++++++++++++++++"
			"++++++++++++++++++++++++++++++++++\n";
	string alphabetThree = "abcdefghijklmnopqrstuvwxyz";
	int thirdStartingIndex,thirdEndingIndex;
	cout << "Enter Starting Index: ";
	cin >> thirdStartingIndex;
	cout << "Enter Ending Index:   ";
	cin >> thirdEndingIndex;
	reverse(alphabetThree, thirdStartingIndex - 1, thirdEndingIndex - 1);
	cout << "\nAfter reversal: " << alphabetThree;
	cout << "\n++++++++++++++++++++++++++++++++++++"
			"++++++++++++++++++++++++++++++++++\n";
	return 0;
}
