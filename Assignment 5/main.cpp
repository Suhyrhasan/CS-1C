/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #5 : Abstract Classes
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 03/02/2020
 *****************************************************************************/
#include <string>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <iostream>
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
/******************************************************************
 * Shape - This class represents an abstract class.
 ******************************************************************/
class Shape
{
public:
	/****************************************************************
	 * virtual ~Shape();
	 * Default Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	virtual ~Shape(){};
	/****************************************************************
	 * virtual float calcPerimeter();
	 * Pure Virtual Member; calcPerimeter
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	virtual float calcPerimeter() = 0;
	/****************************************************************
	 * virtual float calcArea();
	 * Pure Virtual Member; calcArea
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	virtual float calcArea() = 0;
};
/****************************************************************
 * Square - This class represents square attributes.
 ***************************************************************/
class Square: public Shape
{
public:
	/****************************************************************
	 * Square(float area);
	 * Parameterized Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Square(float side){this->side = side;}
	/****************************************************************
	 * ~Square();
	 * Destructor; Frees dynamic memory
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	~Square(){}
	/*******************************************************************
	 * float calcPerimeter();
	 *
	 * Mutator; This method calculates the perimeter of a Square object
	 * by multiplying the side by 4 and returns the result.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: Calculates the perimeter of a Square object.
	 *******************************************************************/
	float calcPerimeter()
	{
		return side * 4;
	}
	/*******************************************************************
	 * float calcArea();
	 *
	 * Mutator; This method calculates the area of a Square object by
	 *          squaring the side and returns the result.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: Calculates the area of a Square object.
	 *******************************************************************/
	float calcArea()
	{
		return side * side;
	}
private:
	float side;
};
/****************************************************************
 * Triangle - This class represents triangle attributes.
 ***************************************************************/
class Triangle: public Shape
{
public:
	/****************************************************************
	 * Triangle();
	 * Default Constructor; Initialize class attributes
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	Triangle(float sideA = 0, float sideB = 0, float sideC = 0){
		this->side1 = sideA;
		this->side2 = sideB;
		this->side3 = sideC;}
	/****************************************************************
	 * ~Square();
	 * Destructor; Frees dynamic memory
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	~Triangle(){}
	/*******************************************************************
	 * float CalcPerimeter();
	 *
	 * Mutator; This method calculates the perimeter of a Triangle
	 *          object by adding the lengths of all of the sides and
	 *          returns the result.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: Calculates the perimeter of a Triangle object.
	 *******************************************************************/
	float calcPerimeter()
	{
		return side1 + side2 + side3;
	}
	/*******************************************************************
	 * float CalcArea();
	 *
	 * Mutator; This method calculates the area of a Triangle object
	 *          using Heron's formula and returns the result.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: Calculates the area of a Triangle object.
	 *******************************************************************/
	float calcArea()
	{
		float s = (side1 + side2 + side3) / 2;
		return (sqrt((s)*(s - side1)*(s - side2)*(s - side3)));
	}
private:
	float side1;
	float side2;
	float side3;
};
/******************************************************************************
 * FUNCTION printArea
 * ____________________________________________________________________________
 * This friend function prints the area of a Square object by having the
 * object that was passed in call the CalcArea function.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			   Shape* shape - Area of a shape.
 * POST-CONDITIONS
 * 	  This function will print the area of a Square object.
 ******************************************************************************/
void printArea(Shape* shape)
{
	cout << "The area is:      " << fixed << setprecision(2) << shape->calcArea();
	cout.unsetf(ios::fixed);
	cout << setprecision(6);
}
/******************************************************************************
 * FUNCTION printPerimeter
 * ____________________________________________________________________________
 * This friend function prints the perimeter of a Square object by having the
 * object that was passed in call the CalcPerimeter function.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			   Shape* shape - Perimeter of a shape.
 * POST-CONDITIONS
 * 	  This function will print the perimeter of a Square object.
 ******************************************************************************/
void printPerimeter(Shape *shape)
{
	cout << "The perimeter is: " << fixed << setprecision(2)<< shape->calcPerimeter();
	cout.unsetf(ios::fixed);
	cout << setprecision(6);
}
/******************************************************************************
 * Abstract Classes
 * ----------------------------------------------------------------------------
 * This program will create an abstract class called Shape with pure virtual
 * members called calcPerimeter and calcArea. Then it will create subclasses
 * of Shape called Square and Triangle that inherited the pure virtual members
 * above. Then it will write two non-member functions called printPerimeter and
 * printArea that call the methods calcPerimeter and calcArea respectfully.
 * In main the program will instantiate a Square and a Triangle object, then
 * ask the user to input the side of a Square and then call the functions
 * printPerimeter and printArea. Then it will ask the user to input the length
 * of the three sides of a triangle and then call the functions printPerimeter
 * and printArea. In the end the program will output the perimeter and area of
 * the Square and triangle objects.
 * ----------------------------------------------------------------------------
 *  INPUT:
 *         side                : Length of sides of a square.
 *         side1, side2, side3 : Lengths of sides of a triangle.
 *  OUTPUT:
 *          Perimeter and Area of both shapes.
 *****************************************************************************/
//passing in cmd line arguements to main
int main(int argc, char* argv[])
{
	// Output header to console
	cout << PrinterHeader("Abstract Classes", 5, 'A');
	// Output description of the program
	cout << "\nThis program will create an abstract class called Shape with pure\n"
			<< "virtual members called calcPerimeter and calcArea. Then it will\n"
			<< "create subclasses of Shape called Square and Triangle that inherited\n"
			<< "the pure virtual members above. Then it will write two non-member\n"
			<< "functions called printPerimeter and printArea that call the methods\n"
			<< "calcPerimeter and calcArea respectfully.Then it will test all the\n"
			<< "class functions in main.\n";
	/****************************************************************************
	 * First - This program will instantiate a Square and a Triangle object. Then
	 *         it will ask the user to input the side of a Square and then call
	 *         the functions printPerimeter and printArea.
	 ****************************************************************************/
	Shape* square;
	Shape* triangle;
	float side1 = 0, side2 = 0, side3 = 0;
	cout << "\n++++++++++\n";
	cout << "  SQUARE   ";
	cout << "\n++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "Please enter the side length of a square: ";
	cin >> side1;
	cout << endl;
	//Dynamically allocate
	square = new Square(side1);
	printArea(square);
	cout << " inches.\n";
	printPerimeter(square);
	cout << " inches.\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";



	/****************************************************************************
	 * Second - This program will ask the user to input the length of the three
	 *          sides of a triangle and then call the functions printPerimeter
	 *          and printArea. Then it will output the perimeter and area of the
	 *          Square and triangle objects.
	 ****************************************************************************/
	cout << "\n++++++++++++\n";
	cout << "  TRIANGLE   ";
	cout << "\n++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "Please enter three sides of a triangle:\n";
	cout << "Side One:   ";
	cin >> side1;
	cout << "Side Two:   ";
	cin >> side2;
	cout << "Side Three: ";
	cin >> side3;
	cout << endl;
	triangle = new Triangle(side1, side2, side3);
	printArea(triangle);
	cout << " feet.\n";
	printPerimeter(triangle);
	cout << " feet.\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	/****************************************************************************
	 * Third - This program will first print the programer's first and last name
	 *         using command line arguments, then it will print out the second
	 *         char of the first name and the first char of the last name.
	 ****************************************************************************/
	cout << "\n++++++++++++++++++++++++++\n";
	cout << "  Command Line Arguments  ";
	cout << "\n++++++++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	argc = 3;
	argv [0] = "Abstract Classes";
	argv [1] = "Suhyr";
	argv [2] = "Hasan";
	cout << "Printing First and Last Name: "
			<< argv[1] << ", " << argv[2] << endl << endl;
	cout << "Printing Out Second Char of First Name and The First Char of Last Name: "
			<< argv[1][1] << ", " << argv[1][2] << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	return 0;
}
