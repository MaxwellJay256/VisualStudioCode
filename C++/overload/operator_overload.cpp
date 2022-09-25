#include <iostream>
using namespace std;

class Box
{
    public:
        double getVolume(void)
        {
            return length*breadth*height;
        }
        void setLength(double len)
        {
            length = len;
        }
        void setBreadth(double bre)
        {
            breadth = bre;
        }
        void setHeight(double hei)
        {
            height = hei;
        }
        //重载+运算符，用于把两个Box对象相加。对象作为参数传递，对象的属性用this运算符进行访问。
        Box operator+(const Box &b)
        {
            Box box;
            box.length = this->length + b.length;
            box.breadth = this->breadth + b.breadth;
            box.height = this->height + b.height;
            return box;
        }
    private:
        double length;
        double breadth;
        double height; 
};

int main()
{
    Box box1;
    Box box2;
    Box box3;
    double volume = 0.0;//把体积存储在该变量中

    //box1 详述
    box1.setLength(6.0);
    box1.setBreadth(7.7);
    box1.setHeight(5.0);

    //box2 详述
    box2.setLength(12.0);
    box2.setBreadth(13.5);
    box2.setHeight(10.0);

    //把两个对象相加，得到box3
    box3 = box1 + box2;
    volume = box3.getVolume();
    cout << "Volume of box3 : " << volume << endl;

    return 0;
}