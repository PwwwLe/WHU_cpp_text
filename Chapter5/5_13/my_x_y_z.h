//
// Created by Pwl on 2023/5/13.
//

#ifndef WHU_CPP_TEXT_MY_X_Y_Z_H
#define WHU_CPP_TEXT_MY_X_Y_Z_H

class X;

class Y {
public:
    void g(X *);
};

class X {
private:
    int i;
public:
    X() { i = 0; }

    friend void h(X *);

    friend void Y::g(X *);

    friend class Z;
};

void h(X *x) {
    x->i += 10;
}

void Y::g(X *x) { x->i++; }

class Z {
public:
    void f(X *x) { x->i += 5; }
};


#endif //WHU_CPP_TEXT_MY_X_Y_Z_H
