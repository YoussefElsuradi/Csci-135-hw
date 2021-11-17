
/*
Youssef Elsuradi
Tong Yee

*/




#include <iostream>
#include <cmath>
using namespace std;


bool isDivisibleBy(int n, int d);       //declared ints

bool isPrime(int n);

int nextPrime(int n);

int countPrimes(int a, int b);

bool isTwinPrime(int n);

int nextTwinPrime(int n);

int largestTwinPrime(int a, int b);

int main() {


    /*cout << isDivisbleBy(100, 25) <<endl;
    cout << isPrime(0) <<endl;
    cout << isPrime(1) <<endl;
    cout << isPrime(25) <<endl;
    */
   cout << nextPrime(17) <<endl;

    return 0;
}

int largestTwinPrime(int a, int b){
    for (int i = b; i >= a; i--){
        if (isTwinPrime(i))
                return i;
    }
    return -1;
}

int nextTwinPrime(int n){
    for(int i=n+1;;i++){
        if(isTwinPrime(i))
        return i;
    }
    return -1;
}


bool isTwinPrime(int n){
    if (isPrime(n) and (isPrime(n - 2) or  isPrime(n + 2))){
        return true;
    }
    return false;
}

int countPrimes(int a, int b){
    int counter = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            counter++ ;
        }
    }
    return counter;
}



int nextPrime(int n) {

    n++; //increment n until find prime
    while (!isPrime(n)){    // while n isnt prime keep incrementing
        n++;
    } // loop stops when n is prime
    return n;
}


bool isPrime(int n) {



    if (n < 2 ) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (isDivisbleBy(n, i)) {   // loop stops if num is divisble by a number between 2 and the num
            return false;
        }
    }
    //if it never returns false then its prime
    return true;
}

bool isDivisibleBy(int n, int d){
    // special unusual case
    if (d == 0){
        return false;

    }
    // Check the remainder.
    if(n%d == 0){
        return true;
        
    }
    //other wise
    return false;
    
}
