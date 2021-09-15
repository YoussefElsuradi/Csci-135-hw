

/* 
Youssef Elsuradi
Tong Yee
Lab2b
*/


#include <iostream>
#include <iomanip>
using namespace std;



int main() {

    int L = 0;
    cout << "Enter L: ";
    cin >> L;

    int U = 0;
    cout << "Enter U: ";
    cin >> U;

    for(int i = L; i < U; i++) { // this stops the Loop once L = U
 
        cout << L <<endl;
        L = L + 1; // everytime the loop runs it adds 1 to L until L = U
    }


// hey ;)





    return 0;
}