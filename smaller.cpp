
/*
Author: Youssef Elsuradi
Course: CSCI-136
Instructor: Tong Yee
Assignment: Lab1A

*/



#include <iostream>
using namespace std;

int main() {
	cout << "Enter the first number: " << endl;
	int fst = 0;
	cin >> fst;

	cout << "Enter the second number: " << endl;
	int snd = 0;
	cin >> snd;

    int smol = 0;

    if ( fst < snd) // if the first num is smaller than the second it replaces the value of smol
        smol = fst;
    if (snd < fst) // this is if the 2nd int is smaller it replaces the value of smol
        smol = snd;
	
	cout << "the smaller of the two is " << smol << "." << endl;
}