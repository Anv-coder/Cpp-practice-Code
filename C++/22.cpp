//Write a program to calculate sum of first N natural numbers.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum += i;

    cout << "Sum = " << sum << endl;
    return 0;
}
