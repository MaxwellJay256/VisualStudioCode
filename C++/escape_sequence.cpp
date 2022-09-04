#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello\tWorld\n\n";  //"/t"：水平制表符（相当于tab）


    string greeting = "Hello, Runoob!";
    cout << greeting;
    cout << "\n";      //"\n"：换行符
    string greeting2 = "Hello, \
    runoob\\";
    cout << greeting2;

    return 0;
}