/*
Author: Youssef Elsuradi
Course: CSCI-136
Instructor: Tong Yee
Assignment: Lab1C

*/



#include <iostream>
using namespace std;

int main() {
	
    cout << "Enter year: " << endl;
    int x = 0;
    cin >> x;

    string y;           // declared string so that it can take the string value later

    if (x % 4 != 0)         // if the remainder isnt zero that means the year isnt divisible by 4
        y = "common year";
    else if (x % 100 != 0)
        y = "Leap Year";
    else if (x % 400 != 0)
        y = "common year";
    else y = "Leap Year";
        
    cout << y <<endl ;
}