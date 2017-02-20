/********************************************************************************/
/* PURPOSE: This program takes an integer as an argument and returns true if    */
/* the argument is a prime number, or false otherwise.                          */
/* IMPLEMENTED BY: Octvaio Cea                                                  */
/* DATE: February 27, 2015                                                      */
/* USER INFORMATION: The user simply runs the program                           */
/* IMPLEMENTATION METHOD: The program stores the prime numbers from 1 to 100 in */
/* a file.                                                                      */
/* OVERVIEW OF SUBPARTS:  The program consists of only the main function.       */
/********************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

bool isPrime (int);

int main()
{

	ofstream outputFile;
	outputFile.open("primes.txt");

	cout << "Now writing data to the file......";

	for(int number = 1; number < 100; number++)
	{
		if(isPrime(number))
		{
			outputFile << number << ", ";
		}
	}

	outputFile.close();
	cout << "Done.   ";

	return 0;
}



bool isPrime (int value)
{
	for (int i = 2; i <  value; i++)
	{	
		if (value % i == 0)
		{
			return false;
		}	
	}
	
	return true;
	
}		
