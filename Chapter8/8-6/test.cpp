//
// Created by Pwl on 2023/5/27.
//
#include "iostream"

using namespace std;

const double PI = 3.141593;

class Shape {
public:
    Shape() {}

    ~Shape() {}

    virtual double getArea() const = 0;

    virtual double getPerim() const = 0;
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle() {}

    Rectangle(double l, double w) : length(l), width(w) {}

    ~Rectangle() {}

    double getArea() const override {
        return length * width;
    }

    double getPerim() const override {
        return 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle() {}

    Circle(double r) : radius(r) {}

    ~Circle() {}

    double getArea() const override {
        return PI * radius * radius;
    }

    double getPerim() const override {
        return 2 * PI * radius;
    }
};

int main() {
    Rectangle r1(4.5, 5.6);
    Circle c1(2.5);
    cout << "Rectangle area : " << r1.getArea() << endl;
    cout << "Rectangle perimeter : " << r1.getPerim() << endl;
    cout << "Circle area : " << c1.getArea() << endl;
    cout << "Circle perimeter : " << c1.getPerim() << endl;
}