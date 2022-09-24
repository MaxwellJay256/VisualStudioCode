#include<iostream>
using namespace std;

//这是弱化版题目的第一道
int main()
{
    int N, M;//N：矩阵的长宽，M：矩形的最小边长
    cin >> N >> M;
    char p[N][N];
    //读入矩阵
    int x, y;
    for ( y=0; y<N; y++ ) {
        for ( x=0; x<N; x++ ) {
            cin >> p[x][y];
        }
    }

    //判断矩形的起始点
    int a,b,c,d;

    x = 0;
    y = 0;
    while ( p[x][y] != '1' ) {
        x++;
        if ( x == N ) {
            y++;
            x = 0;
        }
    }
    b = x + 1;
    a = y + 1;
    //终止点
    while ( p[x][y] == '1' ) {
        x++;
    }
    d = x--;
    while ( p[x][y] == '1' ) {
        y++;
    }
    c = y--;

    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}