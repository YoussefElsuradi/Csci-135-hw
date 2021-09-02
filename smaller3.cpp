
/*
Author: Youssef Elsuradi
Course: CSCI-136
Instructor: Tong Yee
Assignment: Lab1B

*/



#include <iostream>
using namespace std;

int main() {
	cout << "Enter the first number: " << endl;
	int x = 0;
	cin >> x;

	cout << "Enter the second number: " << endl;
	int y = 0;
	cin >> y;

    cout << "Enter the third number: " << endl;
	int z = 0;
	cin >> z;

    int smol = 0;

    if ( x < y) // if the first num is smaller than the second it replaces the value of smol
        smol = x;
    if (y < x) // this is if the 2nd int is smaller it replaces the value of smol
        smol = y;
    if (z < smol)
        smol = z;
	
	cout << "the smaller of the three is " << smol << "." << endl;
}