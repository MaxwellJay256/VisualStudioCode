#include <iostream>
using namespace std;

class printData
{
    public:
    //在同一个作用域内，可以声明几个功能类似的同名函数。但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。
        void print(int i) {
            cout << "integer: " << i << endl;
        }

        void print(double f) {
            cout << "float: " << f << endl;
        }

        void print(char c[]) {
            cout << "string: " << c << endl;
        }
};

int main(void)
{
    printData pd;

    //输出整数
    pd.print(5);
    //输出浮点数
    pd.print(500.56563);
    //输出字符串
    char c[] = "Hello C++";
    pd.print(c);

    return 0;
}