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




struct Triangle {
    Point a;
    Point b;
    Point c;
};

double distance(Point a, Point b);
double perimeter(Triangle a);

double distance(Point a, Point b) {
    double xDiff = (a.x-b.x);
    double yDiff = (a.y-b.y);
    return sqrt((xDiff*xDiff)+(yDiff*yDiff));
}

double perimeter(Triangle z) {
    double ab=distance(z.a, z.b);
    double bc=distance(z.b, z.c);
    double ac=distance(z.a, z.c);
    return ab+bc+ac;
}

int main() {
    Point a = {3, 4};
    Point b = {1, 0};
    Point c = {4, 2}; 
    return 0;
}