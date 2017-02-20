/********************************************************************************/
/* PURPOSE: To calculate the calories from fat and the  percentage of calories  */
/* that come from fat in a food item                                            */
/* item                                                                         */
/* IMPLEMENTED BY: Octvaio Cea                                                  */
/* DATE: February 13, 2015                                                      */
/* USER INFORMATION: Imput calories and fat grams found on a food item          */
/* IMPLEMENTATION METHOD: The program calculates the the percentage of calories */
/* that come from fat in a food item by dividing the calories fromm fat by the  */
/* total calories.                                                              */
/* OVERVIEW OF SUBPARTS:  The program consists of only the main function.       */
/********************************************************************************/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	double calsfromfat, fatgrams, totalcals, percalsfromfat;

	cout << "Enter number of calories in food: ";
	cin >> totalcals;
	cout << "Enter number of fat grams in food: ";
	cin >> fatgrams;
	calsfromfat = fatgrams * 9;
	if (totalcals < 0) 
	{
		cout << "Error: Number of Calories in food were entered incoreclty.  ";
	}
	else if (fatgrams <0) 
	{
		cout << "Error: Number of Fat grams in food was entered incorectly.  ";	
	}
	
	else if (calsfromfat > totalcals) 
	{
		cout << "Error: Either the number of Calories or the number of Fat grams in food were entered incorectly.  ";
	}
	else if (totalcals == 0)
	{
		cout << "The percentage of calories that come from fat is: 0.  ";
	}
	else
	{
		percalsfromfat = ((calsfromfat/totalcals)*100);
		cout << "The percentage of calories that come from fat is: " << percalsfromfat << "%";
		if (calsfromfat < (totalcals*.3)) 
		{
			cout << ", food is low on fat.  ";
		}	
		else
		{
			cout << ", food has high levels of fat.  ";
		}
	}
	return 0;
}

	  

