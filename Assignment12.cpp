/********************************************************************************/
/* PURPOSE: This program demonstrates a class with five functions which store a */
/* number in an array, retrieve a number from the array, returns the highest    */
/* and lowest values sored in the array and it returns the average of all the   */
/* numbers stored in the array.                                                 */
/* IMPLEMENTED BY: Octvaio Cea                                                  */
/* DATE: April 24, 2015                                                         */
/* USER INFORMATION: The user enters values to be stored in the array           */
/* IMPLEMENTATION METHOD: The program uses the functions in the class to display*/                
/* the highest and lowest values stored in the array and the average of all the */
/* numbers stored in the array.                                                 */
/* OVERVIEW OF SUBPARTS:  The program consists of the main function and a class */
/* with five different functions                                                */
/********************************************************************************/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*************************************************************************************************************/
/*PURPOSE: This class consists of two private members and five functions as public members                   */
/*USING: This class consists of the storeNum function, the rtrvNum function, the highestVal function, the    */ 
/*lowestVal function, and the avgOfAllNums function                                                          */
/*USED IN: No classes or modules are used in this class                                                      */
/*IMPLEMENTATION: The avgOfAllNums function adds up all the elements in the array and then it divides that   */
/*value by the size of the array                                                                             */
/*************************************************************************************************************/
class numArray
	{
		private:
		  int arraySize;
		  float* numbers[];
		public:
		  numArray(int);
		  ~numArray();
	     	  void storeNum(int, float);
		  float rtrvNum(int);
		  float highestVal(float);
		  float lowestVal(float);
		  float avgOfAllNums();
	};

/********************************************************************************/
/* PURPOSE: This function serves as the constructor of the class                */
/* INPUT PARAMETERS: This function takes as an input parameter an int data type */
/* OUTPUT PARAMETERS: This function does not return anything                    */
/* IMPLEMENTATION METHOD: This function dynamically allocates an array          */
/********************************************************************************/
numArray::numArray(int size)
{
	arraySize = size;
	numbers = new float[size];
	for (int i =0; i < size; i++)
	{
		numbers[i] = 0;
	}
}

/********************************************************************************/
/* PURPOSE: This function stores a number in any element of the array           */ 
/* INPUT PARAMETERS: This function takes as an input parameter an int data type */
/* and a float data type                                         		*/
/* OUTPUT PARAMETERS:This function does not return anything                     */
/* IMPLEMENTATION METHOD:  This function stores a number in any element of the  */
/* array                                                                        */
/********************************************************************************/
void numArray::storeNum(int index, float value)
{
	numbers[index] = value;
}

/********************************************************************************/
/* PURPOSE: This function retrieves a number from any element of the array      */
/* INPUT PARAMETERS: This function takes as an input parameter an int data type */
/* OUTPUT PARAMETERS: This function returns a value                             */
/* IMPLEMENTATION METHOD: This function retrieves a number from any element of  */
/*  the array                                                                   */
/********************************************************************************/
float numArray::rtrvNum(int index)
{
	return numbers[index];
}

/********************************************************************************/
/* PURPOSE: This function returns the highest value stored in the array         */
/* INPUT PARAMETERS: This function has no input parameters                      */
/* OUTPUT PARAMETERS: This function returns a value                             */
/* IMPLEMENTATION METHOD: This function returns the highest value stored in the */
/* array                                                                        */
/********************************************************************************/
float numArray::highestVal()
{
	float highest = numbers[0];
	for(int i = 0; i < arrSize; i++)
	{
		if(numbers[i] > highest)
		{
			highest = numbers[i];
		}
	}
	return highest;
}

/********************************************************************************/
/* PURPOSE: This function returns the lowest value stored in the array          */
/* INPUT PARAMETERS: This function has no input parameters                      */
/* OUTPUT PARAMETERS: This function returns a value                             */
/* IMPLEMENTATION METHOD: This function returns the lowest value stored in the  */
/* array                                                                        */
/********************************************************************************/
float numArray::lowestVal()
{
	float lowest = numbers[0];
        for (int i = 0; i < arrSize; i++)
        {
                if(numbers[i] < lowest)
                {
                        lowest = numbers[i];
                }
        }
        return lowest;
}

/********************************************************************************/
/* PURPOSE: This function returns the average of all the numbers stored in the  */
/* array                                                                        */
/* INPUT PARAMETERS: This function has no input parameters                      */
/* OUTPUT PARAMETERS: this function returns the average of all the values in the*/
/* array                                                                        */
/* IMPLEMENTATION METHOD: This function adds up all the elements in the array   */
/* and then it divides that value by the size of the array                      */
/********************************************************************************/
float numArray::avgOfAllNums()
{
	for (int i = 0; i < arrSize; i++)
	{
		float total = numbers[i]+;
	}
	float avg = total/arrSize;
}

int main()
{
	int arrIndex;
	cout << "Enter the desired size of the Array: " << endl;
	cin >> arrSize;

	while (arrIndex != -1)
	{
		cout << "Enter an Array index or -1 to quit: " << endl;
		cin >> arrIndex;
		numArray.storeNum(arrIndex);
	} 
	
	if (arrIndex = -1)
	{
		cout << "The highest value in the array is: " << numArray.highestVal(arrIndex) << endl;
		cout << "The lowest value in the array is: " << numArray.lowestVal(arrIndex) << endl;
		cout << "The average array values is: " << numArray.avgOfAllNums(numbers[]) << endl;
	}
	return 0;
}
