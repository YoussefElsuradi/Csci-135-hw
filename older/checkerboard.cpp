
/* 
Youssef Elsuradi
Tong Yee
lab 4 
*/






#include <iostream>    // Allows program to output data to the screen.

using namespace std;

// The function main() begins program execution.
int main() {
    int x;


    int h ;
    int w ;
    cout << " Enter Height and Width: ";\
    cin >> w;

    for (int i=0; i<h; i++)
    {
        for (int j=0; j<w; j++)
        {
            if ((i % 2 == 0) && (j % 2 == 0))
                cout << "*";
            else if ((i % 2 != 0 ) && (j % 2 != 0))
                cout << "*";
            else 
                cout << " ";
        }
        cout <<endl;
    }

    return 0;
} // end of function main
