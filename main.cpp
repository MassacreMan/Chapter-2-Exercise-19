// This program will calculate the state and county sales tax of a $95 purchase

#include <iostream>
using namespace std; 

int main()

{
	// Total of purchase before sales taxes
	int regularPrice = 95;

	// State tax
	double stateTax = 0.065;

	// County tax
	double countyTax = 0.02;

	// Total tax
	double totalTax = (stateTax + countyTax) * 100; 

	// Final price
	double finalPrice = totalTax + regularPrice;

	// Display results

	cout << "Regular price: $" << regularPrice << endl;
	cout << "Tax amount: %" << totalTax << endl;
	cout << "Total price $" << finalPrice << endl;

}