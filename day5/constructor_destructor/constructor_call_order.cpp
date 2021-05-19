//
// Created by user on 2021/5/19.
//
//构造函数调用次序
#include <iostream>

using namespace std;

class A {
    int x;
public:
    A(int i = 0) {
        x = i;
        cout << "A-----" << x << endl;
    }

    ~A() {
        cout << "~A-----" << endl;
    }
};

class B {
    int y;
public:
    B(int i) {
        y = i;
        cout << "B-----" << y << endl;
    }

    ~B() {
        cout << "~B-----" << endl;
    }
};

class C {
    int z;
public:
    C(int i) {
        z = i;
        cout << "C-----" << z << endl;
    }

    ~C() {
        cout << "~C-----" << endl;
    }
};

class D : public B {
public:
    C c1, c2;
    A *a1 = new A(10);
    A a0, a4;

    D() : a4(4), c2(2), c1(1), B(1) {
        cout << "D-----5" << endl;
    }

    ~D() {
        cout << "~D-----" << endl;
    }
};

int main() {
    D d;
    system("pause");
}
