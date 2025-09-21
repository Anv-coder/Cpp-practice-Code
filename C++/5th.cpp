/*Write a program to ask user about the cost priWrite a program to ask user about the cost price and selling price banana per dozen.
Calculate the profit or loss earned upon selling 25 bananas.*/

#include <iostream>
using namespace std;

int main() {
    float cpDozen, spDozen;
    cout << "Enter cost price of 1 dozen bananas: ";
    cin >> cpDozen;

    cout << "Enter selling price of 1 dozen bananas: ";
    cin >> spDozen;

    
    float cpEach = cpDozen / 12.0;
    float spEach = spDozen / 12.0;

    
    float totalCP = cpEach * 25;
    float totalSP = spEach * 25;

    
    if (totalSP > totalCP) {
        cout << "Profit = " << (totalSP - totalCP) << endl;
    } else if (totalSP < totalCP) {
        cout << "Loss = " << (totalCP - totalSP) << endl;
    } else {
        cout << "No Profit, No Loss" << endl;
    }

    return 0;
}
