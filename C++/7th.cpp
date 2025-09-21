//Write a program to input an ASCII code from the user and print its corresponding character.

#include <iostream>
using namespace std;

int main() {
    int asciiValue;
    cout << "Enter an ASCII code (0 – 127): ";
    cin >> asciiValue;

    char ch = (char)asciiValue;   // Type casting int to char

    cout << "Character for ASCII code " << asciiValue << " = '" << ch << "'" << endl;

    return 0;
}
