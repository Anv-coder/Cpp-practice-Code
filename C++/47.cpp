/*   print pattern like 
* 
* * 
* * * 
* * * * 
* * * * * 
            */
#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"enter the value of n ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) cout << "\033[34m*\033[0m "; // Blue star
            else cout << "* ";
        }
        cout << endl;
    }
    return 0;
}