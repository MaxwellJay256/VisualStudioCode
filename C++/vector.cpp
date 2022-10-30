#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>
#include<stdexcept>
using namespace std;

class MyVector
{
    private:
        vector<int> elems;
    
    public:
        MyVector(int capacity);
        ~MyVector();
        void Display();                     //遍历整个vector
        int At(unsigned int index);         //获取数组第x位上的数据, 并且检查索引值是否有效, 如果⽆效, 抛出 std::out_of_range
        void Push(int x);                   //在最后⼀位加⼊新的数据, 如果容量⽤完, 扩容(根据计算机习俗, 你应该扩容成9原来⼤⼩的2倍)
        int Pop_back();                     //把最后⼀个数据移除并且把其中的值返回出来
        unsigned int Size();                //获取⽬前存储的数据的个数
        unsigned int Capacity();            //获取下次扩容之前可容纳的总⼤⼩
        bool Empty() const {
            return elems.empty();
        }
        bool ValidIndex(int x);             //检查输入的索引是否有效
        void Extend();                      //对vector扩容
};

void MyVector::Display()
{
    for (int i=0; i<elems.size(); i++)
        cout << "No." << i << " Data: " << elems.at(i) << endl;
}

MyVector::MyVector(int capacity)
{
    //elems.resize(capacity);
}

int MyVector::At(unsigned int index)
{
    return elems.at(index);
}

void MyVector::Extend()
{
    int s = elems.size()+elems.capacity();
    s *= 2;
    elems.resize(s);
    cout << "Vector capacity doubled." << endl;
}

void MyVector::Push(int x)
{
    /*
    if( elems.capacity() == 0 ) {
        Extend();
    }*/
    elems.push_back(x);
}

int MyVector::Pop_back()
{
    int temp;//temp：临时存储最后一个元素
    if (elems.empty()) {
        throw out_of_range("MyVector::Pop_back(): empty stack");
    }
    temp = elems.back();
    elems.pop_back(); 
    return temp;
}

unsigned int MyVector::Size()
{
    return elems.size();
}

unsigned int MyVector::Capacity()
{
    return elems.capacity();
}

MyVector::~MyVector()
{
    elems.clear();
    cout << "Vector terminated." << endl;
}

int main()
{
    try {
        cout << "Creating vector..." << endl;
        int capacity;
        cout << "Input capacity: ";
        cin >> capacity;
        if ( capacity <= 0 ) {
            throw out_of_range("Invalid input error!");
        } else {
            cout << "Vector created!" << endl << endl;
        }
        MyVector Vec(capacity);

        //test 1: Basic i/o
        char c;
        int data;
        cout << "Append new element?(y/n)";
        cin >> c;
        while( c=='y' || c=='Y' ) {
            cout << "Input data: ";
            cin >> data;
            Vec.Push(data);
            cout << "Append new element?(y/n)";
            cin >> c;
        }
        Vec.Display();

        //test2
        cout << Vec.Pop_back() << endl;
        cout << Vec.Pop_back() << endl;

    }
    catch(exception const &ex) {
        cerr << "Exception: " << ex.what() << endl;
        return -1;
    }
}