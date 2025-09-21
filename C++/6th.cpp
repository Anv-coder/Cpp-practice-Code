//Write a program to input a character from the user and print its ASCII code

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int asciiValue = (int)ch;   // Type casting char to int

    cout << "ASCII value of '" << ch << "' = " << asciiValue << endl;

    return 0;
}
