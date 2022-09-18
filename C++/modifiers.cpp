#include <iostream>
using namespace std;

/*
 *这个程序演示有无符号整数之间的区别
*/
int main()
{
    short int i;
    short unsigned int j;

    j = 50000;
    i = j;

    cout << i << " " << j;

    return 0;
} 