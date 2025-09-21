//Develop a program that converts a temperature from Fahrenheit to Celsius or vice versa based on user input. The user should specify the type of conversion.

#include <iostream>
using namespace std;

int main() {
    double temp;
    char choice;

    cout << "Enter temperature value: ";
    cin >> temp;

    cout << "Convert to (C/F)? Enter C for Celsius or F for Fahrenheit: ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        double celsius = (temp - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << celsius << " °C" << endl;
    }
    else if (choice == 'F' || choice == 'f') {
        double fahrenheit = (temp * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
