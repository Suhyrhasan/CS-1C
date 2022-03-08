/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #6 : Friends, Overloading
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 03/09/2020
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
	/****************************************************************
	 * friend bool equalPer(Shape &s, Shape &t);
	 * Friend Class; Checks perimeter of different types of shapes.
	 * Parameters: none
	 * Return: a boolean expression
	 ***************************************************************/
	friend bool equalPer(Shape &s, Shape &t);
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
	/*******************************************************************
	 * void printArea()
	 *
	 * Mutator; This method prints the area of a Square object by having
	 *          the object that was passed in call the CalcArea function.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: Outputs the area of a Square object.
	 *******************************************************************/
	void printArea()
	{
		cout << "The area of the square is:      ";
		cout << fixed << setprecision(2) << calcArea() << " inches.\n";
		cout.unsetf(ios::fixed);
		cout << setprecision(6);
	}
	/*******************************************************************
	 * void printPerimeter()
	 *
	 * Mutator; This method prints the perimeter of a Square object by
	 *          having the object that was passed in call the
	 *          CalcPerimeter function.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: Outputs the perimeter of a Square object.
	 *******************************************************************/
	void printPerimeter()
	{
		cout << "The perimeter of the square is: ";
		cout << fixed << setprecision(2) << calcArea() << " inches.\n";
		cout.unsetf(ios::fixed);
		cout << setprecision(6);
	}
	/*******************************************************************
	 * void addition(int x)
	 *
	 * Mutator; This method adds an integer to a Square’s side
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: Outputs how many units were added to the side.
	 *******************************************************************/
	void addition(int x)
	{
		cout << side << "  the length of the side before units to the side.\n";
		side += x;
		cout << x << " units were added to the side.\n";
		cout << side << " the length of the side after units to the side.\n";
	}
	// overloading operator ==
	friend bool operator==(Square &s1, Square&s2);

	// overloading operator +
	friend Square operator+(Square &s1, int x);

	// overloading operator <<
	friend ostream& operator<< (ostream &out, Square &point);

	// overloading operator >>
	friend istream& operator>> (istream &in, Square &point);
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
	 * ~Triangle();
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
	/*******************************************************************
	 * void printArea()
	 *
	 * Mutator; This method prints the area of a Square object by having
	 *          the object that was passed in call the CalcArea function.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: Outputs the area of a Triangle object.
	 *******************************************************************/
	void printArea()
	{
		cout << "The area of the triangle is:      ";
		cout << fixed << setprecision(2) << calcArea() << " feet.\n";
		cout.unsetf(ios::fixed);
		cout << setprecision(6);
	}
	/*******************************************************************
	 * void printPerimeter()
	 *
	 * Mutator; This method prints the perimeter of a Square object by
	 *          having the object that was passed in call the
	 *          CalcPerimeter function.
	 *------------------------------------------------------------------
	 * Parameter: none
	 *------------------------------------------------------------------
	 * Return: Outputs the perimeter of a Triangle object.
	 *******************************************************************/
	void printPerimeter()
	{
		cout << "The perimeter of the triangle is: ";
		cout << fixed << setprecision(2) << calcArea() << " feet.\n";
		cout.unsetf(ios::fixed);
		cout << setprecision(6);
	}
private:
	float side1;
	float side2;
	float side3;
};
/******************************************************************************
 * FUNCTION equalPer
 * ____________________________________________________________________________
 * This friend function reads in square and triangle's perimeter and compares
 * them.
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			   Shape s - Perimeter of a square.
 * 	  			   Shape t - Perimeter of a triangle.
 * POST-CONDITIONS
 * 	  This function will print whether or not the two perimters are equal.
 ******************************************************************************/
bool equalPer(Shape &s, Shape &t)
{
	if(s.calcPerimeter() == t.calcPerimeter())
		return true;
	else
		return false;
}
bool operator==(Square &s1, Square &s2){
	return (s1.calcArea() == s2.calcArea());}
Square operator+(Square &s, int x)
{
	s.side += x;
	cout<<"Side increased by "<<x<<" units\n";
	return s;
}
ostream& operator<< (ostream &out, Square &s)
{
	out<<"Length of Square : "<<s.side<<endl;
	s.printPerimeter();
	s.printArea();
	return out;
}
istream& operator>> (istream &in, Square &s)
{
	cout<<"Enter Side Length: ";
	cin>>s.side;
	s.printPerimeter();
	s.printArea();
}
/******************************************************************************
 * Friends, Overloading
 * ----------------------------------------------------------------------------
 * Using the code from assignment 5 write and test a friend function that checks
 * to see if the perimeter of a Square object is equal to the perimeter of a
 * Triangle object. Test both equal and not equal scenarios and print out each
 * perimeter. Then overload the equality operator to see if the area of two
 * Squares are equal. Test both equal and not equal scenarios and print out
 * each perimeter. Also  write an addition member function that adds an
 * integer to a Square’s side (make sure the integer is a passed parameter).
 * The output will state how many units were added to the side and the length
 * of the side before and after adding units to the side. Then overload the
 * equality operator to see if the area of two Squares are equal. Test both
 * equal and not equal scenarios and print out each perimeter. In the end
 * overload << and >> operators to read in a Triangle object.
 * ----------------------------------------------------------------------------
 *  INPUT:
 *        side                : Length of sides of a square.
 *        side1, side2, side3 : Lengths of sides of a triangle.
 *  OUTPUT:
 *        Perimeter and Area of both shapes.
 *****************************************************************************/
int main()
{
	// Output header to console
	cout << PrinterHeader("Friends, Overloading", 6, 'A');
	// Output description of the program
	cout << "\nUsing the code from assignment 5 this program will will test a\n"
			<< "friend function that checks to see if the perimeter of a Square\n"
			<< "object is equal to the perimeter of a Triangle object.Then it will\n"
			<< "overload the equality operator to see if the area of two Squares\n"
			<< "are equal.It also test an addition function that adds an integer\n"
			<< "to a Square’s side also it will overload the addition operator to\n"
			<< "add a constant to a Square’s side.\n";
	float side = 0,side1 = 0, side2 = 0, side3 = 0;
	cout << "Please enter the side length of the first square: ";
	cin >> side;
	Square s1(side);
	cout << "\nPlease enter three sides of the first triangle:\n";
	cout << "Side One:   ";
	cin >> side1;
	cout << "Side Two:   ";
	cin >> side2;
	cout << "Side Three: ";
	cin >> side3;
	Triangle t1(side1,side2,side3);
	cout << "\nPlease enter the side length of the second square: ";
	cin >> side;
	Square s2(side);
	cout << "\nPlease enter three sides of the second triangle:\n";
	cout << "Side One:   ";
	cin >> side1;
	cout << "Side Two:   ";
	cin >> side2;
	cout << "Side Three: ";
	cin >> side3;
	Triangle t2(side1,side2,side3);
	cout << "\nPlease enter the side length of the third square: ";
	cin >> side;
	Square s3(side);
	/****************************************************************************
	 * First - This program will test a friend function that checks to see if the
	 *         perimeter of a Square object is equal to the perimeter of a
	 *        Triangle object. Test both equal and not equal scenarios. Print out
	 *        each perimeter.
	 ****************************************************************************/
	cout << "\n+++++++++++++++++++++++++\n";
	cout << "  First Perimeter Check   ";
	cout << "\n+++++++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\nSquare 1 and Triangle 1 Perimeter Check : ";
	if(equalPer(s1, t1))
	{
		cout<<"Equal\n";
	}else
		cout<<"Unequal\n";
	s1.printPerimeter();
	t1.printPerimeter();
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "++++++++++++++++++++++++++\n";
	cout << "  Second Perimeter Check   ";
	cout << "\n++++++++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"\nSquare 2 and Triangle 2 Perimeter Check : ";
	if(equalPer(s2, t2))
	{
		cout<<"Equal\n";
	}else
		cout<<"Unequal\n";
	s2.printPerimeter();
	t2.printPerimeter();
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	/****************************************************************************
	 * Second - This program will overload the equality operator to see if the
	 *          area of two Squares are equal. Test both equal and not equal
	 *          scenarios. Then it will print out each perimeter.
	 ****************************************************************************/
	cout << "++++++++++++++++++++\n";
	cout << "  First Area Check   ";
	cout << "\n++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"Square 1 and Square 2 Area Check : ";
	if(s1 == s2)
	{
		cout<<"Equal\n";
	}else
		cout<<"Unequal\n";
	s1.printPerimeter();
	s2.printPerimeter();
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++\n";
	cout << "  Second Area Check   ";
	cout << "\n+++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"Square 2 and Square 3 Area Check : ";
	if(s2 == s3)
	{
		cout<<"Equal\n";
	}
	else
		cout<<"Unequal\n";
	s2.printPerimeter();
	s3.printPerimeter();
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	/****************************************************************************
	 * Third - This program will write an addition member function that adds an
	 *         integer to a Square’s side (make sure the integer is a passed
	 *         parameter). The output will state how many units were added to
	 *         the side and the length of the side before and after adding units
	 *         to the side.
	 ****************************************************************************/
	cout << "++++++++++++++++++++++++++++++++++++\n";
	cout << "  Testing Addition Member Function   ";
	cout << "\n++++++++++++++++++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	int x;
	cout<<"Increase side of square 1 by how much : ";
	cin>>x;
	s1.addition(x);
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	/****************************************************************************
	 * Fourth - This program will overload the addition operator to add a
	 *          constant to a Square’s side. For example: MySquare = MySquare + 8.
	 *          The output will state how many units were added to the side and
	 *          the length of the side before and after adding units to the side.
	 ****************************************************************************/
	cout << "+++++++++++++++++++++++++++++++++\n";
	cout << "  Testing Overloaded + Operator   ";
	cout << "\n+++++++++++++++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"After doing s2 = s2 + 8 :\n";
	s2 = s2 + 8;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	/****************************************************************************
	 * Fifth - This program will overload << and >> operators to read in a
	 *         Triangle object.
	 ****************************************************************************/
	cout << "++++++++++++++++++++++++++++++++++++++\n";
	cout << "  Testing >>&<< Overloaded Operators   ";
	cout << "\n++++++++++++++++++++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"After doing cin>>s3 :\n";
	cin>>s3;
	cout<<"\nAfter doing cout<<s3 :\n";
	cout<<s3;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	return 0;
}
