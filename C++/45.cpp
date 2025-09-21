/*   print pattern like

1 2 3 4 5 6 
1 2 3 4 5 6 
1 2 3 4 5 6 
             */

#include <iostream>
using namespace std;

int main() {
    int rows , cols ;
    cout<<"enter the value of rows";
    cin>>rows;
    cout<<"enter the value of cols";
    cin>>cols;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}