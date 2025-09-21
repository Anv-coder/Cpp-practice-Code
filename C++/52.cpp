/*   print pattern like
* * * * * 
  * * * * 
    * * * 
      * * 
        *   */

#include <iostream>
using namespace std;

int main() {
    int n;  // total rows
    cout<<"enter the value of n ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        // stars
        for (int k = n; k > i; k--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}