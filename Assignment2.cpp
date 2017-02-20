/********************************************************************************/
/* PURPOSE: To calculate Annual Pay.                                            */
/* IMPLEMENTED BY: Octavio Cea                                                  */
/* DATE: January 30, 2015                                                       */
/* USER INFORMATION:  Users run the program withou doing anything else.         */
/* IMPLEMENTATION METHOD: The program calculates the Annual Pay by multyplying  */
/* the Pay Periods by the Pay Amount.                                           */
/* OVERVIEW OF SUBPARTS:  The program consists of only the main function.       */
/********************************************************************************/
#include <iostream>
using namespace std;
int main()
{
double payAmount = 2200.0;
int payPeriods = 26;
double annualPay = payPeriods * payAmount;
cout << "Annual Pay is $" << annualPay << endl;
  return 0;
}
