//
// Created by Pwl on 2023/5/13.
//

#include <iostream>

using namespace std;

class SimpleCircle {
private:
    int *itsRadius;
public:
    SimpleCircle();

    explicit SimpleCircle(int);

    SimpleCircle(const SimpleCircle &);

    ~SimpleCircle() = default;

    void setRadius(int);

    int getRadius() const;
};

int SimpleCircle::getRadius() const { return *itsRadius; }

SimpleCircle::SimpleCircle() { itsRadius = new int(5); }

SimpleCircle::SimpleCircle(int radius) { itsRadius = new int(radius); }

SimpleCircle::SimpleCircle(const SimpleCircle &rhs) { itsRadius = new int(rhs.getRadius()); }

void SimpleCircle::setRadius(int radius) { itsRadius = new int(radius); }

int main() {
    SimpleCircle CircleOne, CircleTwo(9);
    cout << "CircleOne:" << CircleOne.getRadius() << endl;
    cout << "CircleTwo:" << CircleTwo.getRadius() << endl;
    return 0;
}
