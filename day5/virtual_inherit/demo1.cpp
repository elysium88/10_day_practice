//
// Created by user on 2021/5/19.
//

#include<iostream>
using namespace std;
class A {
public:
    void vf() {
        cout<<"I come from class A"<<endl;	}
};
class B: public A{};
class C: public A{};
class D: public B, public C{};

int main()
{
    D d;
    d.vf ();	// error 派生类继承了多个基类的成员，当两个不同基类拥有同名成员时，容易产生名字冲突问题。
    system("pause");
    return 0;
}

