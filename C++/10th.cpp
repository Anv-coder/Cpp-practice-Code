/*WAP to take time as an input in below given format and convert the time format and display the result as given below.
User Input time format – “HH:MM”
Output format – “Hour = HH , Minute = MM”
                                          */

#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    char sep;   // to store ':'

    cout << "Enter time in HH:MM format: ";
    cin >> hour >> sep >> minute;

    cout << "Hour = " << hour 
         << ", Minute = " << minute << endl;

    return 0;
}
