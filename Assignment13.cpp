/********************************************************************************/
/* PURPOSE:  This program reverses the order of a string entered by the user    */
/* IMPLEMENTED BY:  Octavio Cea                                                 */
/* DATE: May 08, 2015                                                           */
/* USER INFORMATION:  User inputs a string and runs the program                 */
/* IMPLEMENTATION METHOD: The program uses a recursive function to reverse the  */
/* order of the string entered.                                                 */
/* OVERVIEW OF SUBPARTS:  The program consists of the main function and the     */
/* reverseOrder function.                                                       */
/********************************************************************************/
#include <iostream>
using namespace std;

// Function prototype
string reverseOrder(string);

int main()
{
	string usersString; 

	cout << "Please Enter a String: ";
	getline (cin, usersString); 				    //Stores the string entered by user.
	
	cout << "The String You Entered in Reverse Order is: " << reverseOrder(usersString) << endl;
	
	return 0;
}

/********************************************************************************/
/* PURPOSE: This function reverses the order of a string entered by the user.   */
/* INPUT PARAMETERS: This function takes a string as an input parameter.        */                                       
/* OUTPUT PARAMETERS: This function returns a string.			        */
/* IMPLEMENTATION METHOD: This function separates the first character of the    */
/* string and stores it in firstChat. The function then reverses the rest of    */
/* the string using recursion and stores it in restOfStr. Finally the function  */ 
/* appends the first character to the now-reversed rest of string.	        */
/********************************************************************************/

string reverseOrder(string str)
{	
	if (str.size() > 1) 					     // Makes sure the string characters are grater than 1.
	{
		 string firstChar, restOfStr, reversedStr;

       		 firstChar = str.substr(0,1);			     //Stores the first character of string in firstChar
		 restOfStr =  str.substr(1,str.size());		     // Stores the rest of the astring in restOfStr
        	 reversedStr = reverseOrder(restOfStr) + firstChar;  //Reverses the rest of the string and ads the first character to the end  
	 	 
		return reversedStr;
	}
	else
	{	
		return str;
	}






}
