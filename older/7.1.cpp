/*
Youssef Elsuradi
Tong Yee

*/


#include <iostream>
using namespace std;

void sort2(double *p, double *q);


void sort2(double *p, double *q)
{
    if (p > q ){
        double pSwap = *p;
        *p = *q;
        *q = pSwap;
    }
    return;
}

int main()
{
    double x = 7;
    double y = 9;


    sort2(&x, &y);


    cout << "x = " << x << " y= " << y << endl;
    return 0;
}