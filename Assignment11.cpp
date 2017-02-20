/********************************************************************************/
/* PURPOSE: This program writes an array into a file and then reads the file and*/ 
/* stores the data in another array to finally dispaly it on the monitor        */
/* IMPLEMENTED BY: Octavio Cea                                                  */
/* DATE: April 17, 2015                                                         */
/* USER INFORMATION: The user simply runs the program                           */
/* IMPLEMENTATION METHOD: The program uses the arrayToFile and fileToArray      */
/* functions to wrtite an array to a file and to read that array from the file  */
/* OVERVIEW OF SUBPARTS: This program consists of the main function,            */
/*the arrayToFile function and the fileToArray function                         */
/********************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function prototypes
void arrayToFile(string, int[], int);
void fileToArray(string, int[], int);

int main()
{
	const int SIZE = 7;
	int writeArray[SIZE] = {1, 2, 3, 4, 5, 6, 7};
	int readArray[SIZE] = {0, 0, 0, 0, 0, 0, 0};

	// write array to file
	cout << "Writing array data to the file.\n";

	arrayToFile("numbers.dat", writeArray, sizeof(writeArray));
	
	// open and read file to array
	 cout << "Reading array data.\n";

	fileToArray("numbers.dat", readArray, sizeof(readArray));
	
	for (int count = 0; count < SIZE; count++)
                cout << readArray[count] << " " << endl;

	return 0;
}

/********************************************************************************/
/* PURPOSE: The function opens the specified file in binary mode,             */
/* writes the contents of the array to the file and closes the file.            */
/* INPUT PARAMETERS: This function takes as parameters the name of a file, a    */
/* pointer to an array, and the size of the array                               */
/* OUTPUT PARAMETERS: The function opens the specified file in binary mode,     */
/* writes the contents of the array to the file and closes the file.            */
/* IMPLEMENTATION METHOD: This function uses the file.open, file.write and      */
/* file.close member functiona to give an output.                 	        */
/********************************************************************************/
	
	void arrayToFile(string fileName, int numberArray[], int arraySize)
	{
	    fstream file;
	
	    file.open("fileName", ios::out | ios::binary);
            file.write(reinterpret_cast<char *>(numberArray), arraySize);
            file.close();
     	} 

/********************************************************************************/
/* PURPOSE: The function opens the specified file in binary mode,               */
/* reads its contents onto an array and then closes the file.                   */
/* INPUT PARAMETERS: This function takes as parameters the name of a file, a    */
/* pointer to an array, and the size of the array                               */
/* OUTPUT PARAMETERS: The function opens the specified file in binary mode,     */
/* reads its contents onto an array and then closes the file.                   */
/* IMPLEMENTATION METHOD: This function uses the file.open, file.write and      */
/* file.close member functiona to give an output.                               */
/********************************************************************************/

	void fileToArray(string fileName, int numberArray[], int arraySize)
	{
	    fstream file;

	    file.open("fileName", ios::in | ios::binary);
            file.read(reinterpret_cast<char *>(numberArray), arraySize);
            file.close();
	}

