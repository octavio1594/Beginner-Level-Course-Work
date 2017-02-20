/********************************************************************************/
/* PURPOSE:  This program keeps track of the weather for 3 different months     */
/* IMPLEMENTED BY: Octavio Cea                                                  */
/* DATE: March 6, 2015                                                          */
/* USER INFORMATION:  Users run the program withou doing anything else.         */
/* IMPLEMENTATION METHOD The program reads data form a filem to display a report*/
/* OVERVIEW OF SUBPARTS:  The program consists of only the main function.       */
/********************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream inputFile;
	inputFile.open("RainOrShine.txt");

	char weather[3][30];  // 3 months, 30 days
	
	for (int month = 0; month < 3; month++)
	{
		for(int day = 0; day < 30; day++)
		{
			inputFile >> weather[month][day];
		}
	} 
	
	inputFile.close();

	//first index: 0 = June, 1 = July, 2 = August
	//second index: 0 = Sunny, 1 = Cloudy, 2 = Rainy
	int monthWeather [3][3];
	monthWeather[0][0] = 0;
	monthWeather[0][1] = 0;
	monthWeather[0][2] = 0;
	monthWeather[1][0] = 0;
	monthWeather[1][1] = 0;
	monthWeather[1][2] = 0;
	monthWeather[2][0] = 0;
	monthWeather[2][1] = 0;
	monthWeather[2][2] = 0;

	for (int month = 0; month < 3; month++)
	{
		for (int day = 0; day < 30; day++)
		{ 
			if(weather[month][day] == 'S')
			{
				monthWeather[month][0]++;
			}
			if (weather[month][day] == 'C')
			{
				monthWeather[month][1]++;
			}
			if (weather[month][day] == 'R')
			{
				monthWeather[month][2]++;
			}
			
		}
	

	}
	cout << "There were " <<  monthWeather[0][0] <<  " sunny days in June." << endl;
 	cout << "There were " << monthWeather[0][1] << " cloudy days in June." << endl;
	cout << "There were " << monthWeather[0][2] << " rainy days in June." << endl;
	cout << "There were " << monthWeather[1][0] << " sunny days in July." << endl;
	cout << "There were " << monthWeather[1][1] << " cloudy days in July." << endl;
	cout << "There were " << monthWeather[1][2] << " rainy days in July." << endl;
	cout << "There were " << monthWeather[2][0] << " sunny days in August." << endl;
	cout << "There were " << monthWeather[2][1] << " cloudy days in August." << endl;
	cout << "There were " << monthWeather [2][2] << " rainy days in August." << endl;  
	
	int sunnyDays = monthWeather[0][0] + monthWeather[1][0] + monthWeather[2][0];
	int cloudyDays = monthWeather[0][1] + monthWeather[1][1] + monthWeather[2][1];
	int rainyDays = monthWeather[0][2] + monthWeather[1][2] + monthWeather[2][2];
	
	cout << "There were a total of: " << sunnyDays << " Sunny days." << endl;
	cout << "There were a total of: " << cloudyDays << " Cloudy days." << endl;
	cout << "There were a total of: " << rainyDays << " Rainy days." << endl;



	return 0;
}
