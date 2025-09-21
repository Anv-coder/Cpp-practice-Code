//Write a program to input three characters from the user and display characters with their corresponding ASCII codes.

#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3;

    cout << "Enter three characters separated by space: ";
    cin >> c1 >> c2 >> c3;

    cout << "Character: " << c1 << " | ASCII: " << (int)c1 << endl;
    cout << "Character: " << c2 << " | ASCII: " << (int)c2 << endl;
    cout << "Character: " << c3 << " | ASCII: " << (int)c3 << endl;

    return 0;
}
