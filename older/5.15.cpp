
/*
Youssef Elsuradi
Tong Yee

*/
 // 1
 // 2
 // 3


#include <iostream>
using namespace std;

void sort2(int& a, int& b);

void sort3(int& a, int& b, int& c);


void sort2(int& a , int& b){
    if ( b < a ){
        int temp = a;
        a = b;
        b = temp;
    }
}

void sort3(int& a, int& b, int& c) {


    sort2(a, b);

    if (c < b) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;

    }
    if (b < a) {
        int temp = a;
        a = b;
        b = temp;
    }

}



int main(){
    int a;
    int b;
    int c;
    cout << "Please enter 3 values : " << endl;
    cin >> a >> b >> c;

    sort3(a, b, c);
    cout << a << b << c <<endl;
    
}