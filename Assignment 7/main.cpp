/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #7 : Exceptions
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 03/23/2020
 *****************************************************************************/
#include <iostream>
#include <iomanip>
#include <sstream>
#include <math.h>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <assert.h>
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
	virtual void calcPerimeter() = 0;
	/****************************************************************
	 * virtual float calcArea();
	 * Pure Virtual Member; calcArea
	 * Parameters: none
	 * Return: none
	 ***************************************************************/
	virtual void calcArea() = 0;
};
/****************************************************************
 * Triangle - This class represents triangle attributes.
 ***************************************************************/
class Triangle: public Shape
{
public:
	/**********************************************************
	 * setSides(float,float,float);
	 * --------------------------------------------------------
	 * This method sets all the sides of Triangle
	 ***********************************************************/
	void setSides(float,float,float);
	/**********************************************************
	 * getFirstSide();
	 * --------------------------------------------------------
	 * This method gets the first side of Triangle
	 ***********************************************************/
	float getFirstSide();
	/**********************************************************
	 * getSecondSide();
	 * --------------------------------------------------------
	 * This method gets the second side of Triangle
	 ***********************************************************/
	float getSecondSide();
	/**********************************************************
	 * getThirdSide();
	 * --------------------------------------------------------
	 * This method gets the third side of Triangle
	 ***********************************************************/
	float getThirdSide();
	/**********************************************************
	 * getPerimeter();
	 * --------------------------------------------------------
	 * This method gets the perimeter of Triangle
	 ***********************************************************/
	float getPerimeter();
	/**********************************************************
	 * calculatePerimeter();
	 * --------------------------------------------------------
	 * This method calculates the perimeter of Triangle
	 ***********************************************************/
	void calcPerimeter();
	/**********************************************************
	 * calculateArea();
	 * --------------------------------------------------------
	 * This method calculates the area of Triangle
	 ***********************************************************/
	void calcArea();
	/**********************************************************
	 * printArea();
	 * --------------------------------------------------------
	 * This method prints the area of Triangle
	 ***********************************************************/
	void printArea();
	/**********************************************************
	 * calculatePerimeter();
	 * --------------------------------------------------------
	 * This method prints the perimeter of Triangle
	 ***********************************************************/
	void printPerimeter();

private:
	float firstSide;
	float secondSide;
	float thirdSide;
	float perimeter;
	float area;
};
/****************************************************************
 * Square - This class represents square attributes.
 ***************************************************************/
class Square : public Shape
{
public:
	/**********************************************************
	 * setSides(float);
	 * --------------------------------------------------------
	 * This method sets all the sides of square
	 ***********************************************************/
	void setSide(float);
	/**********************************************************
	 * getSide();
	 * --------------------------------------------------------
	 * This method gets all the sides of sqaure
	 ***********************************************************/
	float getSide();
	/**********************************************************
	 * getPerimeter();
	 * --------------------------------------------------------
	 * This method gets the perimeter of square
	 ***********************************************************/
	float getPerimeter();
	/**********************************************************
	 * getArea();
	 * --------------------------------------------------------
	 * This method gets the area of square
	 ***********************************************************/
	float getArea();
	/**********************************************************
	 * calculatePerimeter();
	 * --------------------------------------------------------
	 * This method calculates the perimeter of square
	 ***********************************************************/
	void calcPerimeter();
	/**********************************************************
	 * calculateArea();
	 * --------------------------------------------------------
	 * This method calculates the area of square
	 ***********************************************************/
	void calcArea();

	/**********************************************************
	 * calculatePerimeter();
	 * --------------------------------------------------------
	 * This method prints the perimeter of square
	 ***********************************************************/
	void printPerimeter();
	/**********************************************************
	 * printArea();
	 * --------------------------------------------------------
	 * This method prints the area of square
	 ***********************************************************/
	void printArea();

	//CLASSES ABOVE AND BELOW DECLARED HERE
	class above {};
	class below {};

	//FRIEND FUNCTIONS DECLARED HERE
	friend void perimeterIsEqual(Square test, Triangle check);
	friend void perimeterNotEqual(Square test, Triangle check);
	//*
	Square operator +( int addition)
	{
		Square sum;
		cout <<"Adding to side... ";
		sum.sideLength = ( this->sideLength + addition);
		this->sideLength = this->sideLength + addition;
		cout << "Done!" << endl;
		cout << "Added " << addition << " to Square's side length!" << endl;
		return sum;
	}
	Square operator ==( Square compare)
																																																																																																																																																																																			{
		Square sum;

		if ( this->area == compare.getArea() )
		{
			cout << "Areas are equal" << endl;
		} else {
			cout << "Areas are unequal" << endl;
		}
		return sum;}

	friend ostream& operator << ( ostream& os, Square &s);
	friend istream& operator >> ( istream& is, Square &s);
private:
	double sideLength;
	double perimeter;
	double area;
};
/**********************************************************
 * setSides(float);
 * --------------------------------------------------------
 * This method sets all the sides of square
 ***********************************************************/
void Square::setSide(float sidelength)
{
	if (sidelength < 0)
		throw below();

	if (sidelength > 50)
		throw above();
	sideLength = sidelength;
}
/**********************************************************
 * getSide();
 * --------------------------------------------------------
 * This method gets all the sides of sqaure
 ***********************************************************/
float Square::getSide(){return sideLength;}
/**********************************************************
 * getPerimeter();
 * --------------------------------------------------------
 * This method gets the perimeter of square
 ***********************************************************/
float Square::getPerimeter(){return perimeter;}
/**********************************************************
 * getArea();
 * --------------------------------------------------------
 * This method gets the area of square
 ***********************************************************/
float Square::getArea(){return area;}
/*******************************************************************
 * float calcPerimeter();
 *
 * Mutator; This method calculates the perimeter of a Square object
 * by multiplying the side by 4..
 *------------------------------------------------------------------
 * Parameter: none
 *------------------------------------------------------------------
 * Return: none
 *******************************************************************/
void Square::calcPerimeter()
{
	perimeter = ( 4 * sideLength );
}
/*******************************************************************
 * float calcArea();
 *
 * Mutator; This method calculates the area of a Square object by
 *          squaring the side..
 *------------------------------------------------------------------
 * Parameter: none
 *------------------------------------------------------------------
 * Return: none
 *******************************************************************/

void Square::calcArea()
{
	area = (sideLength * sideLength );
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
void Square::printPerimeter()
{
	cout << "The perimeter of the square is: ";
	cout << fixed << setprecision(2) << perimeter << " inches.\n";
	cout.unsetf(ios::fixed);
	cout << setprecision(6);
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
void Square::printArea()
{
	cout << "The area of the square is:      ";
	cout << fixed << setprecision(2) << area << " inches.\n";
	cout.unsetf(ios::fixed);
	cout << setprecision(6);
}

//SQUARE FRIEND FUNCTIONS
void perimeterIsEqual(Square test, Triangle check)
{
	//SETTING BOOL TO FALSE
	bool equal = false;

	//IF STATEMENT BEGINS TO SEE IF PERIMETERS ARE EQUAL
	if (test.perimeter == check.getPerimeter())
	{
		equal = true;
	}

	//IF STATEMENT BEGINS THAT OUTPUTS ACCORDINGLY
	if (equal == true)
	{
		cout << "Perimeters are equal.";
	}
	else
	{
		cout << "Perimeters are unequal.";
	}
};

void perimeterNotEqual(Square test, Triangle check)
{
	//SETTING BOOL TO FALSE
	bool equal = false;

	//IF STATEMENT BEGINS TO SEE IF PERIMETERS ARE NOT EQUAL
	if ( test.perimeter != check.getPerimeter() )
	{
		equal = true;
	}

	//IF STATEMENT BEGINS THAT OUTPUTS ACCORDINGLY
	if ( equal == true )
	{
		cout << "Perimeters are unequal.";
	}
	else
	{
		cout << "Perimeters are equal.";
	}
};


//SQUARE IOSTREAM OPERATORS
ostream& operator << ( ostream& os, Square &s )
{
	cout << "Square's side length is " << s.getSide() << endl;
	s.calcPerimeter();
	cout << "Square's perimeter is " << s.getPerimeter() << endl;
	s.calcArea();
	cout << "Square's area is " << s.getArea() << endl;
	return os;
}

//SQUARE IOSTREAM OPERATORS
istream& operator >> (istream& is, Square &s )
{
	cout << "Enter Side Length: ";
	cin >> s.sideLength;
	return is;
}


/**********************************************************
 * setSides(float,float,float);
 * --------------------------------------------------------
 * This method sets all the sides of Triangle
 ***********************************************************/
void Triangle::setSides(float SideA ,float SideB,float SideC)
{
	firstSide  = SideA;
	secondSide = SideB;
	thirdSide  = SideA;
}

/**********************************************************
 * getFirstSide();
 * --------------------------------------------------------
 * This method gets the first side of Triangle
 ***********************************************************/
float Triangle::getFirstSide(){return firstSide;}
/**********************************************************
 * getSecondSide();
 * --------------------------------------------------------
 * This method gets the second side of Triangle
 ***********************************************************/
float Triangle::getSecondSide(){return secondSide;}
/**********************************************************
 * getThirdSide();
 * --------------------------------------------------------
 * This method gets the third side of Triangle
 ***********************************************************/
float Triangle::getThirdSide(){return thirdSide;}
/**********************************************************
 * getPerimeter();
 * --------------------------------------------------------
 * This method gets the perimeter of Triangle
 ***********************************************************/
float Triangle::getPerimeter(){return perimeter;}
/**********************************************************
 * calculatePerimeter();
 * --------------------------------------------------------
 * This method calculates the perimeter of Triangle
 ***********************************************************/
void Triangle::calcPerimeter()
{
	perimeter = ( firstSide + secondSide + thirdSide);
}
/**********************************************************
 * calculateArea();
 * --------------------------------------------------------
 * This method calculates the area of Triangle
 ***********************************************************/
void Triangle::calcArea()
{
	float s = (firstSide + secondSide + thirdSide) / 2;
	area = (sqrt((s)*(s - firstSide)*(s - secondSide)*(s - thirdSide)));
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
void Triangle::printArea()
{
	cout << "The area of the triangle is:      ";
	cout << fixed << setprecision(2) << area << " feet.\n";
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
void Triangle::printPerimeter()
{
	cout << "The perimeter of the triangle is: ";
	cout << fixed << setprecision(2) << perimeter << " feet.\n";
	cout.unsetf(ios::fixed);
	cout << setprecision(6);
}
/***********************************************************
 * testSquares(float test)
 * ---------------------------------------------------------
 * This method contains the EXCEPTION HANDLEING and will
 * output if the THE VALUE IS OUT OF BOUNDS
 ************************************************************/
void testSquares(float test)
{
	try
	{
		Square newSquare;
		newSquare.setSide(test);

		cout << "Printing Square side length..." << newSquare.getSide() << endl;

	}

	catch (Square::below &)
	{
		cout << "Value is below 0! Entered value: " << test << endl;
		cout << "Enter a valid value please." << endl;
		cout << "Setting side to 97" << endl;
		testSquares(97.0);
	}

	catch (Square::above &)
	{
		cout << "Value is above 50! Entered value: " << test << endl;
		cout << "Enter a valid value please" << endl;
		cout << "Setting side to 12" << endl;
		testSquares(12.0);
	}
}
/******************************************************************************
 * Exceptions
 * ----------------------------------------------------------------------------
 * Using the code from assignment 6 write and test the assert macro (both pass
 * and fail) using two different executions. Then add a an exceptions to the
 * Square class that throws an exception if the length of a side is less than 0
 * or greater than 50 feet.The program will output the values that caused the
 * exceptions (pass a value to the exception routine). The program will allow
 * one to recover from an invalid length (for example, change the length of the
 * side of the Square to a valid length).
 * ----------------------------------------------------------------------------
 *  INPUT:
 *
 *  OUTPUT:
 *
 *****************************************************************************/
int main()
{
	// Output header to console
	cout << PrinterHeader("Exceptions", 7, 'A');
	// Output description of the program
	cout << "\nUsing the code from assignment 6 write and test the assert macro (both\n"
			"pass and fail) using two different executions. Then add a an exceptions to\n"
			"the Square class that throws an exception if the length of a side is less\n"
			"than 0 or greater than 50 feet.The program will output the values that\n"
			"caused the exceptions (pass a value to the exception routine). The program\n"
			"will allow one to recover from an invalid length (for example, change the\n"
			"length of the side of the Square to a valid length).\n\n";
	/*****************************************************************************
	 * First - This program will test the assert macro (both pass and fail) using
	 *          two different executions.
	 *****************************************************************************/
	cout << "\n+++++++++++++++++++++++++\n";
	cout << "  Test The Assert Macro   ";
	cout << "\n+++++++++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	float side = 0;
	cout << "Testing Assert... ";
	cin >> side;
	assert(side > 0);
	cout << "Assert Passed! Moving on..." << endl;
	Square s1;
	cout << "Done!" << endl << "Setting Square side length to "<< side <<" ..." << endl;
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	/*****************************************************************************
	 * Second - This program will add two exceptions to the Square class and test
	 *          both exceptions and output the values that caused the exceptions
	 *          (pass a value to the exception routine).
	 *****************************************************************************/
	cout << "\n+++++++++++++++++++\n";
	cout << "  Test Exceptions  ";
	cout << "\n+++++++++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	testSquares(-6.0);
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	return 0;
}
