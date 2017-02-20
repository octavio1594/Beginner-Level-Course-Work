/********************************************************************************/
/* PURPOSE: This program takes a date in the form of ##/##/#### as an input and */ 
/* outputs the same date in the format of Month ##, ####                        */
/* IMPLEMENTED BY: Octvaio Cea                                                  */
/* DATE: March 27, 2015                                                         */
/* USER INFORMATION: User inputs a date in the form of ##/##/####               */
/* IMPLEMENTATION METHOD: The program changes the format of the date entered    */
/* OVERVIEW OF SUBPARTS:  The program consists of only the main function.       */
/********************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	char date[SIZE];
	
	cout << "Enter date in the form ##/##/####. : ";
	cin >> date;

	if (date[0] == '0')
	{
		if (date[1] == '1')
		cout << "January";

		if (date[1] == '2')
		cout << "February";
	
		if (date[1] == '3')
		cout << "March";
	
		if (date[1] == '4')
		cout << "April";

		if (date[1] == '5')
		cout << "may";

		if (date[1] == '6')
		cout << "June";

		if (date[1] == '7')
		cout << "July";

		if (date[1] == '8')
		cout << "August";

		if (date[1] == '9')
		cout << "September";
	}

	if (date[0] == '1')
	{
		if (date[1] == '0')
		cout << "October";

		if (date[1] == '1')
		cout << "November";

		if (date[1] == '2')
		cout << "December";
	}

	if (date[2] == '/')
	cout << " ";
	
	cout << date[3] << date[4];

	if (date[5] == '/')
	cout << ", ";
	
	for (int count = 6; count < 10; count++)
	{
		cout << date[count];
	}

	return 0;
}
