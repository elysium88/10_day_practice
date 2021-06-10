//
// Created by user on 2021/5/18.
//
//使用友元函数计算两点间距离
#include "iostream"
#include "cmath"

using namespace std;

class Point {
public:
    Point(int x = 0, int y = 0) : X(x), Y(y) {}

    int GetX() const{
        return X;
    }

    int GetY() const{
        return Y;
    }

    friend float Distance(Point &a, Point &b);

private:
    int X, Y;
};
//通过将一个模块声明为另一个模块的友元，一个模块能够引用到另一个模块中本是被隐藏的信息。
//在Distance函数中可以访问Point类中私有变量X,Y
float Distance(Point &a, Point &b) {
    double dx = a.X - b.X;
    double dy = a.Y - b.Y;
    return sqrt(dx * dx + dy * dy);
}

int main(int argc, char *argv[]) {
    Point p1(3.0,5.0),p2(4.0,6.0);
    cout<<"two point distance is:"<<Distance(p1,p2)<<endl;
    system("pause");
    return 0;
}