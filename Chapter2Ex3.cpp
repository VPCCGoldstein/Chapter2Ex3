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


 

int main()
{
    double stateTax;
    double countyTax;
    double itemCost;

    cout << "Please enter the state tax (as a decimal point): ";
    cin >> stateTax;
    cout <<endl<<"Please enter the county  tax (as a decimal point): ";
    cin >> countyTax;
    cout <<"/n What is the cost of the item you are purchasing?";
    cin >> itemCost;


    
    double totalTax = itemCost * stateTax + itemCost * countyTax;
    double totalCost = totalTax + itemCost;

    cout << "The cost of the item is $" << itemCost<<"\n";
    cout << "The total tax including a state tax of " << stateTax<<endl;
    cout << " and a county tax of " << countyTax << endl;;
    cout << "You owe the store a total of " << totalCost;


    return 0;

}

