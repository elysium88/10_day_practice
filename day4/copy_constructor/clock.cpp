//
// Created by user on 2021/5/18.
//

#include "clock.h"
#include "iostream"

using namespace std;


clock::clock(int NewH, int NewM, int NewS) : Hour(NewH), Minute(NewM), Second(NewS) {

}

clock::clock(clock &c) {
    Hour = c.Hour;
    Minute = c.Minute;
    Second = c.Second;
}

void clock::SetTime(int NewH, int NewM, int NewS) {
    Hour = NewH;
    Minute = NewM;
    Second = NewS;
}

void clock::ShowTime() {
    cout << "hour:" << Hour << "-" << "Minute:" << Minute << "-" << "Second:" << Second  << endl;
}

//析构函数
clock::~clock() {

}

int main(int argc, char *argv[]) {
    clock c(0, 0, 0);
    c.SetTime(10, 20, 30);
    c.ShowTime();
    cout << "--------------" << endl;
    clock c1(c);//拷贝构造函数调用
    c1.ShowTime();
    c1.SetTime(12,12,12);
    c1.ShowTime();
    system("pause");
    return 0;

}