//
// Created by user on 2021/5/14.
//
#include "iostream"

using namespace std;
//相同的内存地址
union {
    struct {
        int x;
        int y;
        int z;
    } u;
    int k;
}a;

int main(int argc, const char *argv[]) {
    a.u.x=4;
    a.u.y=5;
    a.u.z=6;
    a.k=0;//覆盖掉第一个int空间值
    printf("%d %d %d %d\n",a.u.x,a.u.y,a.u.z,a.k);
}
