/*
Youssef Elsuradi
Tong Yee
*/

#include <iostream>
#include <cmath>
using namespace std; 

struct Point
{
    double x;
    double y;
};




double distance(Point a, Point b);

double distance(Point a, Point b) {
    double xDiff = (a.x-b.x);
    double yDiff = (a.y-b.y);
    return sqrt((xDiff*xDiff)+(yDiff*yDiff));
}

int main() {
    Point a = {3, 4};
    Point b = {1, 0};
    cout << distance(a, b) << endl;
    return 0;
}