#include<iostream>
using namespace std;

class Box
{
    protected:
        double width;//protected的变量能在派生类中被访问
    public:
        void setWidth(double wid);
        double getWidth(void);

    private:
        double length;
};

class SmallBox:Box //SmallBox事派生类（子类）
{
    public:
        void setSmallWidth(double wid);
        double getSmallWidth(void);
        void setLength(double len);
};

//子类的成员函数
void SmallBox::setSmallWidth(double wid)
{
    width = wid;
}
double SmallBox::getSmallWidth(void)
{
    return width;
}
/*
void SmallBox::setLength(double len)
{
    length = len;//Error：子类不可以访问private中的变量
}*/

int main()
{
    SmallBox box;
    Box box2;
    box2.setWidth(2.0);
    cout << "Width of box is " << box2.getWidth() << endl;
    box.setSmallWidth(5.0);
    cout << "Width of small box is " << box.getSmallWidth() << endl;
}

void Box::setWidth(double wid)
{
    width = wid;
}
double Box::getWidth(void)
{
    return width;
}