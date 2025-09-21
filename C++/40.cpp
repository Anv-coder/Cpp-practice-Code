//Write a program to check whether a given number is an Armstrong number or not.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, temp, digits = 0;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is NOT an Armstrong number." << endl;

    return 0;
}
