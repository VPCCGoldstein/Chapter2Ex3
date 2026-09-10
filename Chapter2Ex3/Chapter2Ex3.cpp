/*
File Name:Chapter2Ex3.cpp
Developer:Mark Goldstein
Date:09/2026

Requirements:
Write a program that computes the sales tax and total price on a $95 purchase.
Assume the state sales tax is 6.5 percent
and the county sales tax is 2 percent.
Display the purchase price, total tax, and total price on the screen.

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double stateSalesTaxRate = .065;
	double countySalesTaxRate = .02;
	double purchasePrice = 95.00;


	cout << "Please enter the price of your purchase." << endl;
	cin >> purchasePrice;
	cout << setw(20) << left << "Purchase Price:" << setw(1)    << "$" << setw(10)<<right<<setprecision(2)<<fixed<<purchasePrice << endl;
	cout << setw(20) << left << "State Sales Tax:" << setw(1)   << "$" << setw(10)<<right<< setprecision(2) <<fixed<< stateSalesTaxRate * purchasePrice << endl;
	cout << setw(20) << left << "County Sales Tax:" << setw(1)   << "$" << setw(10) << right <<setprecision(2)<<fixed<< countySalesTaxRate * purchasePrice << endl;
	cout << setw(40)<<left << string(31, '_') << endl;
	cout << setw(20) << left << "Total Cost:"  
		<< setw(1) << "$" << setw(10)<<right << setprecision(2) << fixed <<purchasePrice+ stateSalesTaxRate * purchasePrice +countySalesTaxRate * purchasePrice << endl;





}

