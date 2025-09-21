//Develop a program that takes four numbers as input and prints the largest among them.

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int maxNum = a;
    if (b > maxNum) maxNum = b;
    if (c > maxNum) maxNum = c;
    if (d > maxNum) maxNum = d;

    cout << "Largest number: " << maxNum << endl;
    return 0;
}
