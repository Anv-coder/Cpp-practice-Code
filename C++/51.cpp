/*   print pattern like 
* * * * * 
* * * * 
* * * 
* * 
*   
             */

#include <iostream>
using namespace std;

int main() {
    int n ; // number of rows
    cout<<"enter the value of n ";
    cin>>n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) cout << "\033[34m*\033[0m "; // first star blue
            else cout << "* ";
        }
        cout << endl;
    }
    return 0;
}