//
// Created by Pwl on 2023/5/13.
//

#include <iostream>

using namespace std;

class Cat {
public:
    Cat() { numOfCats++; }

    static int getNumOfCats() { return numOfCats; }

private:
    static int numOfCats;
};

int Cat::numOfCats = 0;

int main() {
    Cat a;
    Cat b;
    cout << "numOfCats:" << Cat::getNumOfCats() << endl;
    return 0;
}

