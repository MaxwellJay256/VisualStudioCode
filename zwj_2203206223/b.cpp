#include<iostream>
using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m], b[m][p], c[n][p];
    int i, j, k;

    //矩阵读入
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<m; j++ ) {
            cin >> a[i][j];
        }
    }
    for ( i=0; i<m; i++ ) {
        for ( j=0; j<p; j++ ) {
            cin >> b[i][j];
        }
    }

    //结果初始化
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            c[i][j] = 0;
        }
    }

    //矩阵计算
    int term;
    for ( i=0; i<n; i++) {
        for ( j=0; j<p; j++ ) {
            for ( k=0; k<m; k++ ) {
                term = a[i][k] * b[k][j];
                c[i][j] += term;
            }
        }
    }

    //矩阵输出
    for ( i=0; i<n; i++ ) {
        for ( j=0; j<p; j++ ) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}