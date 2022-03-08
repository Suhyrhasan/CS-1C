/******************************************************************************
 * AUTHOR		 : Suhyr Hasan
 * STUDENT ID 	 : 1022520
 * Assignment #2 : Employee-inheritance
 * CLASS 		 : CS1C
 * SECTION 		 : MW 5:00p - 7:30p
 * DUE DATE		 : 01/27/2020
 *****************************************************************************/
#include "myheader.h"
#include "Date.h"
#include "Employee.h"
#include "Programmer.h"
#include "SoftwareArchitect.h"
/******************************************************************************
 * Employee-inheritance
 * ----------------------------------------------------------------------------
 * This program will first create a date class with attributes of month, day,
 * and year, then it will create an Employee class for storing information
 * related to employee information for the CS1C Corporation. This class will
 * contain the employee’s name, employee’s Id, phone number, age, gender, job
 * title, salary, and hire date. Afterwards it will a programmer class that is
 * derived from the employee class with the the following private data members:
 * department number, supervisor’s name, percentage of last salary increase
 * a C++ identifier (true if the employee knows C++),  and a Java identifier
 * (true if the employee knows Java). Then it will finally create a software
 * architect class that is derived from the employee class with the following
 * private data members department number, supervisor’s name, percentage of
 * last salary increase, and the number of years of experience designing
 * software projects.
 *
 * This program will first print all the information related to the Employee
 * class, Programmer class and the Software architect class to test all the
 * member functions. Then the program will change and updated the classes using
 * the functions I created then it will print out the new updated classes.
 * ----------------------------------------------------------------------------
 *****************************************************************************/
int main()
{
	// Output header to console
	cout << PrinterHeader("Employee-inheritance", 2, 'A');
	// Output description of the program
	cout << "\nThis program will first print all the information related to the\n"
			<< "Employee class, Programmer class and the Software architect class\n"
			<< "to test all the member functions. Then the program will change and\n"
			<< "updated the classes using the functions I created then it will print\n"
			<< "out the new updated classes\n\n";

	// create objects of Employee, Programmer,SoftwareArchitect class
	Employee employee1;
	Employee employee2;
	Employee employee3;
	Employee employee4;
	Programmer programmer1;
	Programmer programmer2;
	SoftwareArchitect softwareArchitect1;
	SoftwareArchitect softwareArchitect2;
	/****************************************************************************
	 * First - This program will first print all the information related to the
	 *         Employee class, Programmer class and the Software architect class
	 *         to test all the member functions.
	 ****************************************************************************/
	// print the details of employee
	cout << "\n *******************\n";
	cout <<	" ** C1SCEmployees **\n ";
	cout << "*******************\n";

	cout <<"\n************************************";
	cout << "***************************************\n";
	employee1.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	// print the details of programmer
	cout << "\n ****************\n";
	cout <<	" ** Programmer **\n ";
	cout << "****************\n";

	cout <<"\n************************************";
	cout << "***************************************\n";
	programmer1.print();
	cout <<"\n************************************";
	cout << "***************************************\n";

	// print the details of software architect
	cout << "\n *************************\n";
	cout <<	" ** Software Architects **\n ";
	cout << "*************************\n";

	cout <<"\n************************************";
	cout << "***************************************\n";
	softwareArchitect1.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	/****************************************************************************
	 * Second - The program will use Employee class to update employee information
	 *          for the CS1C Corporation. This class will update the employee’s
	 *          name, employee’s Id, phone number, age, gender, job title, salary,
	 *          and hire date. Then it will print the details of updated employee.
	 ****************************************************************************/
	cout << "\n ***************************\n";
	cout <<	" ** Updated C1SCEmployees **\n ";
	cout << "***************************\n";
	employee1.setName("Tom Brady");
	employee1.setId("12345");
	employee1.setPhoneNumber("949-555-1234");
	employee1.setAge(42);
	employee1.setGender('m');
	employee1.setJobTitle("Quarterback");
	employee1.setSalary(8000000);
	employee1.setHireDate(Date(3,1, 2012));
	cout <<"\n************************************";
	cout << "***************************************\n";
	employee1.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	employee2.setName("Aaron Rodger");
	employee2.setId("12345");
	employee2.setPhoneNumber("310-555-5555");
	employee2.setAge(36);
	employee2.setGender('m');
	employee2.setJobTitle("Quarterback");
	employee2.setSalary(770123);
	employee2.setHireDate(Date(5,8, 2019));
	cout <<"\n************************************";
	cout << "***************************************\n";
	employee2.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	employee3.setName("Oprah Winfrey");
	employee3.setId("98765");
	employee3.setPhoneNumber("703-703-1234");
	employee3.setAge(64);
	employee3.setGender('f');
	employee3.setJobTitle("Talk Show Host");
	employee3.setSalary(9900000);
	employee3.setHireDate(Date(12,25, 2017));
	cout <<"\n************************************";
	cout << "***************************************\n";
	employee3.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	employee4.setName("Jay Leno");
	employee4.setId("77777");
	employee4.setPhoneNumber("203-555-6789");
	employee4.setAge(69);
	employee4.setGender('m');
	employee4.setJobTitle("Comedian");
	employee4.setSalary(500500);
	employee4.setHireDate(Date(3,1, 2012));
	cout <<"\n************************************";
	cout << "***************************************\n";
	employee4.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	/****************************************************************************
	 * Third - The program will use Programmer class that is derived from the
	 *         employee class to update programmer employee information. This
	 *         class will update the programmer employee’s name, employee’s
	 *         Id, phone number, age, gender, job title, salary, hire date,
	 *         department number, supervisor’s name, percentage of last salary
	 *         increase, and what language the programmer knows (if any). Then it
	 *         will print the details of updated programmer
	 ****************************************************************************/
	cout << "\n ************************\n";
	cout <<	" ** Updated Programmer **\n";
	cout << " ************************\n";
	programmer1.setName("Sam Software");
	programmer1.setId("54321");
	programmer1.setPhoneNumber("819-123-4567");
	programmer1.setAge(21);
	programmer1.setGender('m');
	programmer1.setJobTitle("Programmer");
	programmer1.setSalary(223000);
	programmer1.setHireDate(Date(12,24,2017));
	programmer1.setDepartmentNumber(5432122);
	programmer1.setSupervisor("Joe Boss");
	programmer1.setLastSalaryIncrement(4);
	programmer1.setKnowsC(true);
	programmer1.setKnowsJava(false);
	cout <<"\n************************************";
	cout << "***************************************\n";
	programmer1.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	programmer2.setName("Mary Coder");
	programmer2.setId("65432");
	programmer2.setPhoneNumber("310-555-5555");
	programmer2.setAge(28);
	programmer2.setGender('f');
	programmer2.setJobTitle("Programmer");
	programmer2.setSalary(770123);
	programmer2.setHireDate(Date(2,8,2019));
	programmer2.setDepartmentNumber(6543222);
	programmer2.setSupervisor("Mary Leader");
	programmer2.setLastSalaryIncrement(7);
	programmer2.setKnowsC(true);
	programmer2.setKnowsJava(true);
	cout <<"\n************************************";
	cout << "***************************************\n";
	programmer2.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	/****************************************************************************
	 * Fourth -The program will use software architect class that is derived from
	 *         the employee class to update software architect employee
	 *         information. This class will update the software architect
	 *         employee’s name, employee’s Id, phone number, age, gender,
	 *         job title, salary, hire date, department number, supervisor’s name,
	 *         percentage of last salary increase, and the number of years of
	 *         experience designing software projects.Then it will print the details
	 *          of updated software architect employee.
	 ****************************************************************************/
	cout << "\n *********************************\n";
	cout <<	" ** Updated Software Architects **\n";
	cout << " *********************************\n";
	softwareArchitect1.setName("Alex Arch");
	softwareArchitect1.setId("88888");
	softwareArchitect1.setPhoneNumber("819-123-4444");
	softwareArchitect1.setAge(31);
	softwareArchitect1.setGender('m');
	softwareArchitect1.setJobTitle("Architect");
	softwareArchitect1.setSalary(323000);
	softwareArchitect1.setHireDate(Date(12,24 ,2018));
	softwareArchitect1.setDepartmentNumber(5434222);
	softwareArchitect1.setSupervisor("Big Boss");
	softwareArchitect1.setLastSalaryIncrement(5);
	softwareArchitect1.setYearsOfExperience(4);
	cout <<"\n************************************";
	cout << "***************************************\n";
	softwareArchitect1.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	softwareArchitect2.setName("Sally Designer");
	softwareArchitect2.setId("87878");
	softwareArchitect2.setPhoneNumber("310-555-8888");
	softwareArchitect2.setAge(38);
	softwareArchitect2.setGender('f');
	softwareArchitect2.setJobTitle("Architect");
	softwareArchitect2.setSalary(870123);
	softwareArchitect2.setHireDate(Date(2,8, 2013));
	softwareArchitect2.setDepartmentNumber(6543422);
	softwareArchitect2.setSupervisor("Big Boss");
	softwareArchitect2.setLastSalaryIncrement(8);
	softwareArchitect2.setYearsOfExperience(1);
	cout <<"\n************************************";
	cout << "***************************************\n";
	softwareArchitect2.print();
	cout <<"\n************************************";
	cout << "***************************************\n";
	return 0;
}
