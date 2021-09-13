/*
Youssef Elsuradi
tong yee
Lab 2a
*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int x = 0;
    cout << "Enter an integer: " <<endl;
    cin >> x;

    while(1 > x or x > 99) { // if x is smaller than 1 or larger than 99 the loop will continue indefinetly
        cout << "re-enter new integer: " <<endl;
        cin >> x;
    }

// pow lets you put a number to the power of the second number in the parenthesis

    cout << "Number squared is " << pow(x, 2) <<endl;
}