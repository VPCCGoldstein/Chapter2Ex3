/*
* File Name: Chapter2Ex3.cpp
* Programmer:Mark Goldstein
* Date:09/2025
* Requirements:
* Create a program that computes total sales tax on a $95 purchase.
* set states tax to 4 percent and the county sales tax to 2 percent.
*/

#include <iostream>
using namespace std;

const double stateTax = .04;
const double countyTax = .02;
 

int main()
{
    double itemCost = 95.00;
    double totalTax = itemCost * stateTax + itemCost * countyTax;
    double totalCost = totalTax + itemCost;

    cout << "The cost of the item is $" << itemCost<<"\n";
    cout << "The total tax including a state tax of " << stateTax<<endl;
    cout << " and a county tax of " << countyTax << endl;;
    cout << "You owe the store a total of " << totalCost;


    return 0;

}

