//Write a program to print all Prime numbers between two given numbers.

#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start and end: ";
    cin >> start >> end;

    cout << "Prime numbers: ";
    for (int n = start; n <= end; n++) {
        bool isPrime = true;
        if (n < 2) continue;
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
