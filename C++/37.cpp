//Write a program to print all Prime numbers under 100.

#include <iostream>
using namespace std;

int main() {
    cout << "Prime numbers under 100 are: ";
    for (int n = 2; n < 100; n++) {
        bool isPrime = true;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << n << " ";
    }
    cout << endl;
    return 0;
}
