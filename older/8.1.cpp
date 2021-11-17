/*
Youssef Elsuradi
Tong Yee

*/
 // 1
 // 2
 // 3


#include <iostream>

#include <fstream>

using namespace std;

int main() {
    ofstream out;
    out.open("hello.txt");
    out << "Hello, World!";
    out.close();

    ifstream in;
    in.open("hello.txt");
    string str;
    getline(in,str);
    cout<< str << endl;
    in.close();
    return 0;
}