#include<iostream>
using namespace std;

//函数调用运算符 () 可以被重载用于类的对象。当重载 () 时，您不是创造了一种新的调用函数的方式，相反地，这是创建一个可以传递任意数目参数的运算符函数。
class Distance
{
    private:
        int feet;       //范围：0到无穷
        int inches;     //范围：0到12
    public:
        //所需的构造函数
        Distance() {
            feet = 0;
            inches = 0;
        }
        //当Distance()被传进2个参数时，执行的是以下代码。
        Distance(int f, int i) {
            feet = f;
            inches = i;
        }
        //重载函数调用运算符。当Distance()被传进3个参数时，执行的是以下代码。
        Distance operator()(int a, int b, int c)
        {
            Distance D;
            //进行随机计算
            D.feet = a + c + 10;
            D.inches = b + c + 100;
            return D;
        }
        //显示距离的方法
        void displayDistance() {
            cout << "F: " << feet << " I: " << inches << endl;
        }
};

int main()
{
   Distance D1(11, 10), D2;

   cout << "First Distance - "; 
   D1.displayDistance();

   D2 = D1(10, 10, 10); // invoke operator()
   cout << "Second Distance - "; 
   D2.displayDistance();

   return 0;
}