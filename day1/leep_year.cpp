//
// Created by user on 2021/5/14.
//是否闰年
//
#include "iostream"

using namespace std;

int main(int argc, const char *argv[]) {
    int year;
    bool isLeapYear;
    cout << "Enter the year" << endl;
    cin >> year;
    isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    if (isLeapYear) {
        cout << year << "is a leap year" << endl;
    } else {
        cout << year << "is not a leap year" << endl;
    }
}
