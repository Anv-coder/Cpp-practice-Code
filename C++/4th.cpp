// Write a program to calculate volume of a cuboid
#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;

    cout << "Enter length of the cuboid: ";
    cin >> length;

    cout << "Enter width of the cuboid: ";
    cin >> width;

    cout << "Enter height of the cuboid: ";
    cin >> height;

    // Formula: Volume = length × width × height
    volume = length * width * height;

    cout << "Volume of the cuboid = " << volume << endl;

    return 0;
}
