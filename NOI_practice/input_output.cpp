#include <iostream>
using namespace std;
 
int main( )
{
    char name[50];
    int age;
    char job[114];

    cout << "请输入您的名称： ";
    cin >> name;
    cout << "请输入您的年龄： ";
    cin >> age;
    cout << "请输入您的职业： ";
    cin >> job;
    cout << name << "，" << age << "岁，事一个一个一个" << job << "。\n" ;
 
    return 0;
}