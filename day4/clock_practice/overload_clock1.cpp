//
// Created by user on 2021/5/18.
//
//重载()的时钟
#include "iostream"

using namespace std;

class Time {
public:
    Time(int h = 0, int m = 0, int s = 0) : hh(h), mm(m), ss(s) {}

    void operator()(int h = 0, int m = 0, int s = 0) {
        cout << "operator()" << endl;
        hh = h;
        mm = m;
        ss = s;
    }

    void showTime() const{
        cout << "hour:" << hh << "mm:" << mm << "hh:" << hh << endl;
    }

private:
    int hh, mm, ss;
};

int main(int argc, char *argv[]) {
    Time t1(12, 10, 11);
    t1.showTime();

    t1.operator()(23, 20, 34);
    t1.showTime();
    //重载()的时钟
    t1(10, 10, 10);
    t1.showTime();
}
