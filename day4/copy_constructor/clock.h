//
// Created by user on 2021/5/18.
//

#ifndef INC_10_DAY_PRACTICE_CLOCK_H
#define INC_10_DAY_PRACTICE_CLOCK_H


class clock {
public:
    clock(int NewH,int NewM,int NewS);
    clock(clock &c);//拷贝构造函数，如果不加，编译器会自动生成一个拷贝构造函数，因此加不加都可以直接使用
    void SetTime(int NewH,int NewM,int NewS);
    void ShowTime() const;
    ~clock();//析构函数，编译器会自动产生一个默认的析构函数
private:
    int Hour,Minute,Second;
};


#endif //INC_10_DAY_PRACTICE_CLOCK_H
