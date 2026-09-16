// This program calculates the temperature averages of 3 cities in July if they were raised by 2%

#include<iostream> 
using namespace std;

int main()

{
	// Average temperatures
	int newyorkAverage = 85;
	int denverAverage = 88;
	int phoenixAverage = 106;

	// Increased temperature average
	double averageTempIncrease = 0.02; 

	// New average temperatures after percentage increase
	double newNewYorkAverage = newyorkAverage * averageTempIncrease; 
	double newDenverAverage = denverAverage * averageTempIncrease;
	double newPhoenixAverage = phoenixAverage * averageTempIncrease;

	// Display results
	cout << "New Average Temperature of New York is " << newNewYorkAverage + newyorkAverage  << " degrees F" << endl;
	cout << "New Average Temperature of Denver is " << newDenverAverage + denverAverage << " degrees F" << endl; 
	cout << "New Average Temperature of Phoenix is " << newPhoenixAverage + phoenixAverage << " degrees F" << endl;

}
