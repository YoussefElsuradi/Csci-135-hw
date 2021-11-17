
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


void sort2(int& a , int& b){
    if ( b < a ){
        int temp = a;
        a = b;
        b = temp;
    }
}

int main(){
    int a;
    int b;
    cout << "Please enter two values : " << endl;
    cin >> a >> b;
    
}