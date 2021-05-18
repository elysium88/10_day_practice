//
// Created by user on 2021/5/18.
//
/*
设计一个时钟类，能够记录时、分、秒，重载它的++运算符，每执行一次++运算，加时1秒，但要使计时过程能够自动进位。
*/
#include "iostream"
#include <Windows.h>
using namespace std;

class Time {
public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s){};

    void operator++() {
        ++second;
        if (second == 60) {
            ++minute;
            second=0;
            if (minute == 60) {
                ++hour;
                minute = 0;
                if (hour == 24) {
                    hour = 0;
                }
            }
        }
    };

    void showTime() {
        cout << "current time is " << hour << ":" << minute << ":" << second << endl;
    };
private:
    int hour, minute, second;
};

int main(int argc, char *argv[]) {
    Time t(23,58,58);

    while (1){
        ++t;
        t.showTime();
        Sleep(1000);
    };
    t.showTime();
    system("pause");
    return 0;
}