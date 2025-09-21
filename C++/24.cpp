//Write a program to calculate sum of first N odd natural numbers.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum += (2 * i - 1);

    cout << "Sum = " << sum << endl;
    return 0;
}
