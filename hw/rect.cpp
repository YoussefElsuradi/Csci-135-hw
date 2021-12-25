
/*
youssef elsuradi

Tong yee
*/

#include <iostream>

using namespace std;

class Rectangle {

private:
    double w, h ;
public:
    Rectangle(double w, double h) : w(w), h(h) {

    }

    double get_length() const {
        return h;
    }

    double get_width() const {
        return w;
    }
    
    double get_area() const {
        return w * h;
    }

    double get_perimeter() const {
        return 2 * (w + h);
    }

    void resize(double x) {
        w *= x;
        h *= x;
    }


};


void printRectangle(const Rectangle &rect) {
    cout << "The length is " << rect.get_length() << endl;
    cout << "The width is " << rect.get_width() << endl;
    cout << "The area is " << rect.get_area() << endl;
    cout << "The perimeter is " << rect.get_perimeter() << endl;
}

int main() {
    Rectangle rec1(3.0, 4.0);

    printRectangle(rec1);
    rec1.resize(2.5);
    cout << endl;
    printRectangle(rec1);
    return 0;
}
