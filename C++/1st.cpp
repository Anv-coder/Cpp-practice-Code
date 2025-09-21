//Write a code to find average of three integers. Given by User.
 

#include <iostream>
using namespace std;
int main(){

    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    float average = (a+b+c)/3.0;

    cout <<"Average = " << average << endl;
 



return 0;
}