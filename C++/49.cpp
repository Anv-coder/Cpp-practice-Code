/*   print pattern like   
A 
A B 
A B C 
A B C D 
A B C D E 
          */

#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"enter the value of n ";
    cin>>n;
    for (int i = 1; i <= n; i++) {
        char c = 'A';
        for (int j = 1; j <= i; j++) {
            cout << c++ << " ";
        }
        cout << endl;
    }
    return 0;
}