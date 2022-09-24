#include<iostream>
using namespace std;

int main()
{
    int L, R, l, r;
    cin >> L >> R >> l >> r;
    int d = L - r;
    
    if ( d<=10 ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}