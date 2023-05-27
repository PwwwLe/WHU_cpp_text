//
// Created by Pwl on 2023/5/27.
//
#include "iostream"

using namespace std;

const double PI = 3.1416;

class Shape {
public:
    Shape();

    ~Shape();

    virtual double getArea() { return -1; }

};

class Circle : public Shape {
private:
    double radius;
public:
    Circle() {}

    ~Circle() {}

    Circle(double r) {
        radius = r;
    }

    double getArea() {
        return PI * radius * radius;
    }

};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle() {}

    ~Rectangle() {}

    Rectangle(double a, double b) {
        length = a;
        width = b;
    }

    double getArea() {
        return length * width;
    }
};

class Square : public Rectangle {
public:
    Square() {}

    ~Square() {}

    Square::Square(double len) : Rectangle(len, len) {}


};

int main() {
    Shape *sp;
    sp = new Circle(2.5);
    cout << "Circle -> Radius: 2.5  Area: " <<sp->getArea() <<endl;
    delete sp;
    sp = new Rectangle(1.5,2.5);
    cout << "Rectangle -> Length: 1.5 Width: 2.5  Area: " <<sp->getArea() <<endl;
    delete sp;
    sp = new Square(2.5);
    cout << "Square -> Len: 2.5  Area: " <<sp->getArea() <<endl;
    delete sp;
    return 0;
}