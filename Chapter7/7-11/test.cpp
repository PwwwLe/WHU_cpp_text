//
// Created by Pwl on 2023/5/27.
//
#include "iostream"

using namespace std;

class BaseClass {
public:
    void fn1() {cout << "Base fn1." << endl;}

    void fn2() {cout << "Base fn2." << endl;}

};

class DerivedClass : public BaseClass{
public:
    void fn1(){cout << "Derived fn1."<<endl;}

    void fn2(){cout << "Derived fn2."<<endl;}

};

int main (){
    DerivedClass DC;
    DerivedClass* DC1 = &DC;
    BaseClass* BC = &DC;

    DC.fn1();
    DC.fn2();
    BC->fn1();
    BC->fn2();
    DC1->fn1();
    DC1->fn2();
}

