//Write a program to count digits in a given number.

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) count = 1;
    while (n != 0) {
        count++;
        n /= 10;
    }

    cout << "Number of digits = " << count << endl;
    return 0;
}
