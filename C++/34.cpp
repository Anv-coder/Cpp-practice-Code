//Write a program to check whether a given number is there in the Fibonacci series or not.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int a = 0, b = 1, c = 0;
    bool found = false;

    while (c <= n) {
        if (c == n) {
            found = true;
            break;
        }
        c = a + b;
        a = b;
        b = c;
    }

    if (found)
        cout << n << " is in the Fibonacci series." << endl;
    else
        cout << n << " is NOT in the Fibonacci series." << endl;

    return 0;
}
