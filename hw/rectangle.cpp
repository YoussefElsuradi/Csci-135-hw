/*
Youssef elsuradi

tong yee 
*/



#include <iostream>

using namespace std;

class Rectangle {
private:
    double width, height;
public:
    Rectangle(double width, double height) : width(width), height(height) {

    }

    double get_length() const {
        return height;
    }

    double get_width() const {
        return width;
    }

    double get_area() const {
        return width * height;
    }

    double get_perimeter() const {
        return 2 * (width + height);
    }

    void resize(double n) {
        width *= n;
        height *= n;
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
