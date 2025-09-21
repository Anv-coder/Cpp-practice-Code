//Write a program to check whether two given numbers are co-prime numbers or not.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a, y = b;
    while (x != y) {
        if (x > y) x -= y;
        else y -= x;
    }

    if (x == 1)
        cout << a << " and " << b << " are Co-Prime numbers." << endl;
    else
        cout << a << " and " << b << " are NOT Co-Prime numbers." << endl;

    return 0;
}
