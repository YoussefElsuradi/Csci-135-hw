

/* 
Youssef Elsuradi
Tong Yee
Lab2c
*/


#include <iostream>
#include <iomanip>
using namespace std;



int main() {

    int myData[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int i = 0;
    int v = 0;

    do {
        cout << myData[0]<< " " << myData[1]<< " " << myData[2]<< " " << myData[3]<< " " << myData[4]<< " " << myData[5]<< " " << myData[6]<< " " << myData[7]<< " " << myData[8]<< " " << myData[9] <<endl;
    
    cout << "enter index: ";
    cin >> i;

    
    cout << "enter value: ";
    cin >> v;

        
    myData[i] = v; // replaces value of chosen index 
        
    } while (0 <= i and i <= 10); // if the index is good, repeat
 
    cout << "Invalid Index. Exit." <<endl; // if users chosen index does not exist program terminates
  

    return 0;
}