#include<iostream>
using namespace std;
const int SIZE = 10;

//下标操作符 [] 通常用于访问数组元素。重载该运算符用于增强操作 C++ 数组的功能。
class safearray
{
    private:
        int arr[SIZE];
    public:
        safearray()
        {
            register int i;
            for(i = 0; i < SIZE; i++) {
                arr[i] = i;
            }
        }
        int &operator[](int i) {
            if ( i>=SIZE ) {
                cout << "Index exceeds maximum value!" << endl;
                //返回第一个元素
                return arr[0];
            }
            return arr[i];
        }
};

int main()
{
    safearray A;
 
    cout << "A[2] is: " << A[2] << endl;
    cout << "A[5] is: " << A[5] << endl;
    cout << "A[12] is: " << A[12] << endl;
 
   return 0;
}