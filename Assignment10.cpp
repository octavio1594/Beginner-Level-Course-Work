/********************************************************************************/
/* PURPOSE: This program collects data from the user and calculates the annual  */
/* sales and the average quarterly sales                                        */   
/* IMPLEMENTED BY: Octvaio Cea                                                  */
/* DATE: April 10, 2015                                                         */
/* USER INFORMATION: The user inputs sales for every quarter of each division   */
/* IMPLEMENTATION METHOD: The program calculates the annual sales and the       */
/* average quarterly sales.                                                     */
/* OVERVIEW OF SUBPARTS:  The program consists of only the main function.       */
/********************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CompanyData
{
   string name;
   double firstQuarter;
   double secondQuarter;
   double thirdQuarter;
   double fourthQuarter;
   double annualSales;
   double avgQuarSales; 
};


int main()
{
	CompanyData divisionE = {"East Division"};
	CompanyData divisionW = {"Weast Division"};
	CompanyData divisionN = {"North Division"};
	CompanyData divisionS = {"South Division"};
	
	cout << fixed << showpoint << setprecision(2);
	
	cout << "Division: " << divisionE.name << endl;
	divisionE.firstQuarter = -1;
	while (divisionE.firstQuarter < 0)
	{
		cout << "Enter sales for the first quarter: ";
        	 cin >> divisionE.firstQuarter;
	}
	 divisionE.secondQuarter = -1;
        while (divisionE.secondQuarter < 0)
        {
		cout << "Enter sales for the second quarter: ";
        	 cin >> divisionE.secondQuarter;
	}
	 divisionE.thirdQuarter = -1;
        while (divisionE.thirdQuarter < 0)
        {
		cout << "Enter sales for the third quarter: ";
	 	cin >> divisionE.thirdQuarter;
	}
	 divisionE.fourthQuarter = -1;
        while (divisionE.fourthQuarter < 0)
        {
		cout << "Enter sales for the fourth quarter: ";
	 	cin >> divisionE.fourthQuarter;
	}
	 divisionE.annualSales = divisionE.firstQuarter + divisionE.secondQuarter + divisionE.thirdQuarter + divisionE.fourthQuarter;
	 divisionE.avgQuarSales = divisionE.annualSales/4;
	cout << "The total sales were: $" << divisionE.annualSales << endl;
	cout << "The average quarter sales were: $" << divisionE.avgQuarSales << endl;
	cout << " " << endl;

	

	cout << "Division: " << divisionW.name << endl;
	 divisionW.firstQuarter = -1;
        while (divisionW.firstQuarter < 0)
        {
		cout << "Enter sales for the first quarter: ";
	 	cin >> divisionW.firstQuarter;
	}
	 divisionW.secondQuarter = -1;
        while (divisionW.secondQuarter < 0)
        {
		cout << "Enter sales for the second quarter: ";
	 	cin >> divisionW.secondQuarter;
	}
	 divisionW.thirdQuarter = -1;
        while (divisionW.thirdQuarter < 0)
        {
		cout << "Enter sales for the third quarter: ";
		cin >> divisionW.thirdQuarter;
	}
	 divisionW.fourthQuarter = -1;
        while (divisionW.fourthQuarter < 0)
        {
		cout << "Enter sales for the fourth quarter: ";
	 	cin >> divisionW.fourthQuarter;
	}
	 divisionW.annualSales = divisionW.firstQuarter + divisionW.secondQuarter + divisionW.thirdQuarter + divisionW.fourthQuarter;
         divisionW.avgQuarSales = divisionW.annualSales/4;
        cout << "The total sales were: $" << divisionW.annualSales << endl;
        cout << "The average quarter sales were: $" << divisionW.avgQuarSales << endl;
	 cout << " " << endl;



	cout << "Division: " << divisionN.name << endl;
	 divisionN.firstQuarter = -1;
        while (divisionN.firstQuarter < 0)
        {
		cout << "Enter sales for the first quarter: ";
	 	cin >> divisionN.firstQuarter;
	}
	 divisionN.secondQuarter = -1;
        while (divisionN.secondQuarter < 0)
        {
		cout << "Enter sales for the second quarter: ";
	 	cin >> divisionN.secondQuarter;
	}
	 divisionN.thirdQuarter = -1;
        while (divisionN.thirdQuarter < 0)
        {
		cout << "Enter sales for the third quarter: ";
	 	cin >> divisionN.thirdQuarter;
	}
	 divisionN.fourthQuarter = -1;
        while (divisionN.fourthQuarter < 0)
        {
		cout << "Enter sales for the fourth quarter: ";
	 	cin >> divisionN.fourthQuarter;
	}
	 divisionN.annualSales = divisionN.firstQuarter + divisionN.secondQuarter + divisionN.thirdQuarter + divisionN.fourthQuarter;
         divisionN.avgQuarSales = divisionN.annualSales/4;
        cout << "The total sales were: $" << divisionN.annualSales << endl;
        cout << "The average quarter sales were: $" << divisionN.avgQuarSales << endl;
	 cout << " " << endl;



	cout << "Division: " << divisionS.name << endl;
	 divisionS.firstQuarter = -1;
        while (divisionS.firstQuarter < 0)
        {
		cout << "Enter sales for the first quarter: ";
	 	cin >> divisionS.firstQuarter;
	}
	 divisionS.secondQuarter = -1;
        while (divisionS.secondQuarter < 0)
        {
		cout << "Enter sales for the second quarter: ";
	 	cin >> divisionS.secondQuarter;
	}
	 divisionS.thirdQuarter = -1;
        while (divisionS.thirdQuarter < 0)
        {
		cout << "Enter sales for the third quarter: ";
	 	cin >> divisionS.thirdQuarter;
	}
	 divisionS.fourthQuarter = -1;
        while (divisionS.fourthQuarter < 0)
        {
		cout << "Enter sales for the fourth quarter: ";
	 	cin >> divisionS.fourthQuarter;
	}
	 divisionS.annualSales = divisionS.firstQuarter + divisionS.secondQuarter + divisionS.thirdQuarter + divisionS.fourthQuarter;
         divisionS.avgQuarSales = divisionS.annualSales/4;
        cout << "The total sales were: $" << divisionS.annualSales << endl;
        cout << "The average quarter sales were: $" << divisionS.avgQuarSales << endl;

	return 0;
}
 	
 


	 
