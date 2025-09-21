//Create a program that takes the lengths of three sides of a triangle as input and determines whether the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    // First check if it's a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if (a == b && b == c) {
            cout << "Equilateral Triangle" << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "Isosceles Triangle" << endl;
        }
        else {
            cout << "Scalene Triangle" << endl;
        }
    } 
    else {
        cout << "Not a valid triangle!" << endl;
    }

    return 0;
}
