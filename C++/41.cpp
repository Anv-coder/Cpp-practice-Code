//Write a program to print all Armstrong numbers under 1000.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Armstrong numbers under 1000: ";
    for (int n = 1; n < 1000; n++) {
        int sum = 0, temp = n, digits = 0;

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

        if (sum == n) cout << n << " ";
    }
    cout << endl;
    return 0;
}
