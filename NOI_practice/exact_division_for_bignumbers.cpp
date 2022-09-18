#include <iostream>
#include <cstring>
using namespace std;
bool e[8] = {false,false,false,false,false,false,false,false,};

int main()
{
    char in[35];
    cin.getline(in,35);
    int l = strlen(in);
    int c[l];

    //数字存入
    for ( int i=0; i<l; i++ ) {
        c[i] = in[i] - 48;
    }
    l--;
    
    int l2, l3;//l2：最后2位数，l3：最后3位数
    l2 = 10*c[l-1] + c[l];
    l3 = 100*c[l-2] + l2;

    //检验2
    if ( c[l]%2 == 0 ) {
        e[0] = true;
        //检验4
        if ( l2%4 == 0 ) {
            e[2] = true;
            //检验8
            if ( l3%8 == 0 ) {
                e[6] = true;
            }    
        }
    }

    //检验3
    int sum;//sum：每位数的和
    for ( int i=0; i<=l; i++ ) {
        sum += c[i];
    }
    if ( sum%3 == 0 ) {
        e[1] = true;
        //检验6
        if ( e[0] ) {
            e[4] = true;
        }
        //检验9
        if ( sum%9 == 0 ) {
            e[7] = true;
        }
    }

    //检验5
    if ( c[l] == 0 || c[l] == 5 ) {
        e[3] = true;
    }
    
    //检验7
    int x = 0;
    for ( int i=0; i<=l; i++ ) {
        x = x*10 + c[i];
        x = x%7;
    }
    if ( x == 0 ) e[5] = true;

    //输出
    bool flag = false;
    for ( int i=0; i<8; i++ ) {
        if ( e[i] ) flag = true;
    }
    if ( flag ) {
        for ( int i=0; i<8; i++ ) {
            if ( e[i] ) {
              cout << i+2 << " ";
            }
        }
    } else {
        cout << "none" << endl;
    }
    return 0;
}