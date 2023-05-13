//
// Created by Pwl on 2023/5/13.
//

#include <iostream>

using namespace std;

int * fn1() {
    int * p = new int(5);
    return  p;
}

int main() {
    int * a = fn1();
    cout << "The value of a is :" << * a << endl;
    delete a;
    return 0;
};
