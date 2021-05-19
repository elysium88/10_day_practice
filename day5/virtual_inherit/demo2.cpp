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
class B: virtual public A{};
class C: virtual public A{};
class D: public B, public C{};

int main()
{
    D d;
    d.vf ();	// okay 使用了虚拟继承 可以和demo1比较
    system("pause");
    return 0;
}
