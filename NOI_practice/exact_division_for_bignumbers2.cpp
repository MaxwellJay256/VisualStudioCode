#include <bits/stdc++.h>
using namespace std;
char in[35];
int c[35];
bool flag = 0;
int main()
{
    cin.getline(in,35);
    int x;
    int l = strlen(in);
    for ( int i=0; i<l; i++ ) c[i] = in[i] - '0';

    for ( int k=2; k<=9; k++ ) {
        x = 0;
        for ( int j=0; j<l; j++ ) {
            x = x*10 + c[j];
            x = x%k;
        }
        if ( x == 0 ) {
            flag = 1;
            cout << k << " ";
        }
    }

    if ( flag == 0 ) cout << "none" << endl;

    return 0;
}