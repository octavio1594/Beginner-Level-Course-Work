/********************************************************************************/
/* PURPOSE:  This program sorts the integers in an array to then perform a      */
/* search for a specific integer.                                               */
/* IMPLEMENTED BY: Octavio Cea                                                  */
/* DATE: March 13, 2015                                                         */
/* USER INFORMATION:  Users inputs an account number                            */
/* IMPLEMENTATION METHOD: The program sorts an array and performs a search for  */
/* a specific number.                                                           */
/* OVERVIEW OF SUBPARTS:  The program consists of the selectionSort function,   */
/* the binarySearh function, and  the main function.                            */
/********************************************************************************/

#include <iostream>
using namespace std;

//Function prototypes
void selectionSort (int[], int);
int binarySearch(const int [], int, int);

int main()
{
	const int SIZE = 18;
	int listOfNums[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 
			      4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 
			      3852085, 7576651, 7881200, 4581002};
	
	selectionSort (listOfNums, SIZE);	
	
	int results;
	int accountNum;

	cout << "Please enter an account number: ";
	cin >> accountNum;

	results = binarySearch(listOfNums, SIZE, accountNum);

	if (results == -1)	
		cout << "The account number: " << accountNum << " is not valid.";
	else 
	{
		cout << "The account number: " << accountNum << " is valid.";
 	}
	
	return 0;

}

//*********************************************************************
// Definition of function selectionsSort                              *
// This function performs an ascending order selection sort on array. *
// Size is the number of elements in the array.                       *
//*********************************************************************
	
	void selectionSort (int array[], int size)
	{
		int startScan, minIndex, minValue;
			
		for (startScan = 0; startScan < (size - 1); startScan++)
		{
			minIndex = startScan;
			minValue = array[startScan];
				
			for (int index = startScan + 1; index < size; index++)
			{
				if (array[index] < minValue)
				{
					minValue = array[index];
					minIndex = index;
				}
			}

			array[minIndex] = array[startScan];
			array[startScan] = minValue;
		}
	}

//***************************************************************************
// The binarySearch functionm performs a binary search on an integer array. *
// Array which has a maximum size of elements, is searched for the number   *
// stored in value. If the number is found, its array subscript is returned.*
// Otherwise, -1 is returned indicating the value was not in the array.     *
//***************************************************************************
    
	int binarySearch(const int array[], int size, int value)
	{
		int first = 0, last = size - 1, middle, position = -1;
		bool found = false;

		while (!found && first <= last)
		{
			middle = (first + last)/2;
			if (array[middle] == value)
			{
				found = true;
				position = middle;
			}
			else if (array[middle] > value)
				last = middle - 1;
			else
				first = middle + 1;
		}
		return position;
	}
