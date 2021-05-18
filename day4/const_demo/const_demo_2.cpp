//
// Created by user on 2021/5/18.
//
//常对象与普通函数

#include "iostream"

using namespace std;

class R {
public:
    R();

    R(int r1, int r2) : R1(r1), R2(r2) {
    };

    void print();

    //const区分成员重载函数
    void print() const;

private:
    int R1, R2;
};

void R::print() {
    cout << "R::print()" << endl;
    cout << R1 << ":" << R2 << endl;
}
//实例化也需要带上
void R::print() const {
    cout << "R::print() const" << endl;
    cout << R1 << ":" << R2 << endl;
}

int main(int argc, char *argv[]) {
    R a(5, 4);
    a.print();//调用void print()

    R const b(20, 5);
    b.print(); //通过常对象只能调用它的常成员函数

    system("pause");
    return 0;
}