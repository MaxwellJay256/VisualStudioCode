#include<iostream>
using namespace std;

class Line
{
    public:
        double length;
        void setLength(double length);
        double getlength(void);
};

//成员函数定义
void Line::setLength(double len)
{
    length = len;
    return;
}

double Line::getlength(void)
{
    return length;
}

int main()
{
    Line line;
    line.setLength(6.0);
    cout << "Length of line is " << line.getlength() << endl;

    //不使用成员函数设置长度
    line.length = 10.0;
    cout << "Length of line is " << line.getlength() << endl;
    return 0;
}