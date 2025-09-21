/*   print pattern like

* * * * * * 
* * * * * * 
* * * * * * 
* * * * * *
              */

#include <iostream>
using namespace std;

int main() {
    int rows , cols ;
cout<<"enter the value of rows ";
cin>>rows;
cout<<"enter the value of cols ";
cin>>cols;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(j == 0)
                cout << "\033[34m*\033[0m ";  // Blue star
            else
                cout << "* ";  // Normal star
        }
        cout << endl;
    }
    return 0;
}