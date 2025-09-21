/*   print pattern like

1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4 
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
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}