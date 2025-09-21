//Write a program to find the Nth term of the Fibonacci series.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    int a = 0, b = 1, term;
    if (n == 1) term = a;
    else if (n == 2) term = b;
    else {
        for (int i = 3; i <= n; i++) {
            term = a + b;
            a = b;
            b = term;
        }
    }

    cout << n << "th Fibonacci term = " << term << endl;
    return 0;
}
