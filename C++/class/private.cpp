#include<iostream>
using namespace std;

class Box
{
    public:
        double length;
        void setWidth(double wid);
        double getWidth(void);

    private:
        double width;
};

//成员函数定义
void Box::setWidth(double wid)
{
    width = wid;
    return;
}

double Box::getWidth(void)
{
    return width;
}

int main()
{
    Box box;

    box.length = 10.0;
    cout << "Length of box is " << box.length << endl;

    //设置width
    //box.width = 10.0; //Error，因为width事私有的
    box.setWidth(10.0);
    cout << "Width of box is " << box.getWidth() << endl;
    return 0;
}