/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #12: Unit Testing
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 04/15/2020
 *****************************************************************************/
#include <list>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> // for copy
#include <iterator> // for ostream_iterator
using namespace std;
struct SalesNode
{
	string date;       // sales date
	string memberName; // member name
	int    memberID;   // member id
	string memberType; // member type
	string itemName;   // item name
	float itemPrice;   // item price
	int quantity;      // item quantity
	SalesNode()
	: date(""),memberName(""), memberID(0), memberType(""),itemName(""), itemPrice(0.0), quantity(0){}

	SalesNode(string Date, string MemberName, int MemberID, string MemberType, string ItemName, float ItemPrice, int Quantity)
	: date(Date),memberName(MemberName),memberID(MemberID), memberType(MemberType), itemName(ItemName), itemPrice(ItemPrice), quantity(Quantity){}
	string Display()
	{
		string output = "";
		string spacer = "   ";

		output += "Sales Date: ";
		output += date;
		output += spacer;
		if(memberName != "")
		{
			output += "Member Name: ";
			output += memberName;
			output += spacer;
		}
		string ID = to_string(memberID);
		output += "Member ID: ";
		output += ID;
		output += spacer;

		output += "Item Name: ";
		output += itemName;
		output += spacer;

		string price = to_string(itemPrice);
		output += "Item Price: ";
		output += price;
		output += spacer;

		string number = to_string(quantity);
		output += "Product Quantity: ";
		output += number;
		output += spacer;
		return output;
	}
};
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
class SalesInfo
{
	vector<SalesNode> salesInfo;
public:
	void printSales();
	void printMemberPurchase();
	void printSold();
};
void SalesInfo::printSales()
{
	vector<SalesNode> report1[2];
	string output;
	list<string> numExe, numReg;
	//string number = to_string(salesInfo[12].quantity);
	//assigning the days
	for(int i = 0; i < salesInfo.size(); i++)//scanning thru all the salesInfo
	{
		if(salesInfo[i].date == "3/16/2020")
			report1[0].push_back(salesInfo[i]);
		if(salesInfo[i].date == "3/17/2020")
			report1[1].push_back(salesInfo[i]);

	}

	cout << "PART 1: ***** Sales Report*****\n";

	//OUTPUTTING
	for(int x = 0; x < 2; x++)
	{
		numExe.clear();
		numReg.clear();
		if(x == 0) cout << "3/16/2020 Sales";
		else if(x == 1) cout << "\n3/17/2020 Sales";
		for(int i = 0; i < report1[x].size(); i++)
		{
			if(report1[x][i].memberType == "Regular")
				numExe.push_back(report1[x][i].memberName);
			else if(report1[x][i].memberType == "Executive")
				numReg.push_back(report1[x][i].memberName);
			output = "      ";
			output += report1[x][i].memberName;
			output += "("+ report1[x][i].memberType + ")";
			output += report1[x][i].quantity;
			output += report1[x][i].itemName;
			cout << output;
		}
		//		numExe.removeDuplicates();
		//		numReg.removeDuplicates();
		//		output = "Total Executive Members: " + QString::number(numExe.size());
		//		qDebug() << output;
		//		output = "Total Regular Members: " + QString::number(numReg.size());
		cout << output;
	}
}
void printMemberPurchase();
void printSold();
/******************************************************************************
 * Unit Testing
 * ----------------------------------------------------------------------------
 * This program will
 * ----------------------------------------------------------------------------
 *  INPUT:
 *
 *  OUTPUT:
 *
 *****************************************************************************/
int main()
{
	// Output description of the program
	cout << "\nThis program will\n\n";
	cout << "\n++++++++++++\n";
	cout << "  MARCH 16   ";
	cout << "\n++++++++++++\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
//	vector<SalesNode> day16;
//	SalesNode sale;
//	std::ifstream data_file("day16.txt");
//	while (data_file >> sale)
//	{
//		//		cout << sale.date << " || " << sale.memberName << " || "
//		//				<< sale.memberID << " || " << sale.memberType
//		//				<< " || " << sale.itemName << " || " << sale.itemPrice
//		//				<< " || " << sale.quantity << endl;
//		day16.push_back(sale);
//	}

	//	cout << newSale.date << " || " << newSale.memberName << " || "
	//			<< newSale.memberID << " || " << newSale.memberType
	//			<< " || " << newSale.itemName << " || " << newSale.itemPrice
	//			<< " || " << newSale.quantity << endl;
	//
	//	cout << "\n++++++++++++\n";
	//	cout << "  MARCH 17   ";
	//	cout << "\n++++++++++++\n";
	//	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	//	fstream inFile2;
	//	vector<SalesNode> day17;
	//	inFile2.open("day17.txt");
	//
	//
	//	if (inFile2.is_open())
	//	{
	//		getline(inFile2, newSale.date);
	//		getline(inFile2, newSale.memberName);
	//		inFile2 >> newSale.memberID;
	//		getline(inFile2, newSale.memberType);
	//		getline(inFile2, newSale.itemName);
	//		inFile2 >> newSale.itemPrice;
	//		inFile2 >> newSale.quantity;
	//		// Push - Method from class StackList to add a node
	//		day16.push_back(newSale);
	//		cerr << endl << newSale.date << " || "<< newSale.memberName
	//				<< " || " << newSale.memberID << " || "
	//				<< newSale.memberType << " || " << newSale.itemName
	//				<< " || " << newSale.itemPrice << " || "
	//				<< newSale.quantity << endl;
	//		std::cout << inFile2.rdbuf();
	//	}
	//	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	return 0;
}
