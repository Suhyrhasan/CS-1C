/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #3 : Pointers
 * CLASS 		 : CS1D
 * SECTION 		 : MW 2:30p - 4:50p
 * DUE DATE		 : 02/17/2020
 *****************************************************************************/
#include<vector>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
#define SIZE 5
#ifndef INVENTORY
#define INVENTORY
//definition of inventory structure
typedef struct inventory
{
	string nameEquipment;
	double cost;
	int quantity;
}inventory;
#endif
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
 *
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
	output << "*  " << setw(14) << "CLASS"	     <<": CS1D - MW - 2:30pm - 4:50pm\n";
	output << "*  " ;

	// PROCESSING - This will adjust setws and format appropriately based
	//              based on if this is a lab 'L' or assignment.

	if (toupper(asType) == 'L')
	{
		output << "LAB #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}
	output << asNum << ": " << asName << endl;
	output << "*****************************************************\n";
	output << right;
	return output.str();
}

/******************************************************************************
 * FUNCTION Display
 * ____________________________________________________________________________
 * This function will output display inventory
 * ____________________________________________________________________________
 * PRE-CONDITIONS
 * 	  The following parameters need to have a defined value prior to calling
 * 	  the function:
 * 	  			 inventory *inv - inventory pointer.
 *
 * POST-CONDITIONS
 * 	  This function will output display inventory
 ******************************************************************************/
void Display(inventory *inv)
{
	cout << "Name of equipment\t ";
	cout << "Cost\t";
	cout << setw(3) << " " << "Quantity\n";
	for(int i=0; i<SIZE; i++)
	{
		cout << inv[i].nameEquipment<<"\t ";
		cout << "$ " << right << setw(6) << inv[i].cost;
		cout <<  setw(5) <<" " << right << setw(2) << inv[i].quantity <<endl;
	}
}

/**********************************************************************************
 * Pointers
 * --------------------------------------------------------------------------------
 * This program will use dynamic arrays (using the new and delete operators) to
 * calculate Mark's purchases of four pairs of Nike basketball shoes, five Under
 * Armour T-shirts, six Under Armour shorts, and one pair of Asics running
 * shoes.Then the program will print a receipt for the purchase including the
 * total cost before and after tax\n\n";
 * --------------------------------------------------------------------------------
 * INPUT
 *
 * OUTPUT:
 *********************************************************************************/
int main()
{
	// Outputs Heading
	cout << PrinterHeader("Pointers", 3 , 'A');

	// Output description of the program
	cout << "\nThis program will use dynamic arrays (using the new and\n"
			"delete operators) to calculate Mark's purchases of four \n"
			"pairs of Nike basketball shoes, five Under Armour T-shirts,\n"
			"six Under Armour shorts, and one pair of Asics running\n"
			"shoes.Then the program will print a receipt for the\n"
			"purchase including the total cost before and after tax\n\n";
	/****************************************************************************
	 * Part One - This program will create and initialize inventory.
	 ****************************************************************************/
	inventory *inv = new inventory[SIZE];
	vector<inventory> cart;

	inv[0] = {"Nike basketball shoes" , 179.99, 42};
	inv[1] = {"Under Armour T-shirt"  ,  29.99, 44};
	inv[2] = {"Brooks running shoes"  , 121.44, 13};
	inv[3] = {"Asics running shoes"   , 165.88, 12};
	inv[4] = {"Under Armour shorts"   ,  45.77, 35};
	cout<<"*** Purchase bill *** \n";
	cout<<"Item No. Name of equipment Cost    Quantity\n";
	cout<<"1. Nike basketball shoes   $ 179.99   4 \n";
	cout<<"2. Under Armour T-shirt    $  29.99   3 \n";
	cout<<"3. Under Armour shorts     $  45.77   4 \n";
	cout<<"4. Asics running shoes     $ 165.88   1 \n\n";
	/****************************************************************************
	 * Part Two - This program will caluclate Mark's Purchase.
	 ****************************************************************************/
	double total = (4 * 179.99) + (5 * 29.99) + (6 * 45.77) + 165.88;
	cout << setprecision(2) << fixed;
	cout<<" Total Cost : $"<<total<<endl;
	double tax = total * 7.75 / 100;
	cout<<" Tax (7.75%): $" << right << setw(4) << tax << endl;
	cout<<" Total Cost with Tax: "<<(total +tax)<<endl;
	/****************************************************************************
	 * Part Three - This program will output a receipt for the purchase including
	 * the total cost before tax.
	 ****************************************************************************/
	cout<<"\n\nInventory before Mark\'s purchase: \n";
	Display(inv);
	inv[0].quantity-= 4;
	inv[1].quantity-= 3;
	inv[4].quantity-= 4;
	inv[3].quantity-= 1;
	/****************************************************************************
	 * Part Four - This program will output a receipt for the purchase including
	 * the total cost after tax.
	 ****************************************************************************/
	cout<<"\n\nInventory after Mark\'s purchase: \n";
	Display(inv);
	delete []inv;

	return 0;
}
