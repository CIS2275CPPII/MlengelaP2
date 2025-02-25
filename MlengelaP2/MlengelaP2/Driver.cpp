/*************************************************************************
* Program: Simple Calculator
* programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: September 15th , 2022
* Purpose: To create a simple calculator
**************************************************************************/
#include<iostream>
#include<sstream>
#include<iomanip>

#include "SimpleCalc.h"
using namespace std;

int main()
{
	//variables for operation and operands

	char Oper = '+';
	double op1 = 0.0;
	double op2 = 0.0;

	SimpleCalc calc; // SimpleCalc Object
	char answer = 'y';
	do
	{
		cout << "Daudi Mlengela, a Calculator Console Application: " << endl;

		// Ask the user to select the operation, give the answer

		cout << "Please enter the operation to perform:" << endl;
		cin >> Oper;

		//ask the user to enter the two operation, tell them they are double
		cout << "Please enter the two operations, they are in double" << endl;
		cin >> op1 >> op2;

		// use the object to pass in the values you just go from the user
		calc.SetOperation(Oper, op1, op2);

		// show the result string

		// make variables for receiving the return from GetResult, then cout it

		cout << calc.GetResults();

		//Ask the user if they want to calc some more (y/n)

		cout << "\nDo you want to play again? ";
		cin >> answer;
		// Read thier answers into the variables you created. 

	} while (answer == 'y');
	// Goodbye
	cout << "Thanks for watching my project. Goodbye!" << endl;
	return 0;
}

