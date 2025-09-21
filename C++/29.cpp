//Write a program to check whether a given number is a Prime number or not.

#include <iostream>
using namespace std;

int main() {
    int n, i;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) isPrime = false;
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << n << " is Prime" << endl;
    else
        cout << n << " is Not Prime" << endl;

    return 0;
}
