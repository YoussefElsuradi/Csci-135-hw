/*

Youssef Elsuradi
Tong Yee


Write a program test-ascii.cpp that asks the user to input a line of text (which may possibly include spaces). The program should report all characters from the input line together with their ASCII codes.

Make sure to print exactly one space between the character and it’s code.
*/




#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a line: ";
    getline(cin, s); // gets line with spaces

    int a = s.length(); //num of characters in string

    for (int i = 0; i < a; i++){ // each loop moves up  a letter 

        cout << s[i] << " " << static_cast<int>(s[i]) <<endl;

    }
    
    return 0;
}