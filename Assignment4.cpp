/********************************************************************************/
/* PURPOSE: This program reads all the number from the file and calculates the  */
/* number of numbers in the file, the sum of all the numbers in the file and the*/
/* average of all the numbers in the file                                       */
/* IMPLEMENTED BY: Octvaio Cea                                                  */
/* DATE: February 20, 2015                                                      */
/* USER INFORMATION: User simply runs the program.                              */
/* IMPLEMENTATION METHOD: The program simply displays a report.                 */
/* OVERVIEW OF SUBPARTS:  The program consists of only the main function.       */
/********************************************************************************/
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{
	ifstream inputFile;

	int number = 0;
	int count = 0;
	double sum = 0;
	double average = 0;

	inputFile.open("Random.txt");
	
	while (inputFile >> number)
	{	
		sum = sum + number;
		count = count + 1;
		average = sum/count;
	}
	
	cout << "The total amount of numbers is: " << count << endl;
	cout << "The sum of all the numbers is: " << sum << endl;
	cout << "The average of all the numbers is: " << average << endl;
	
	
	inputFile.close();
	return 0;
}
