#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int c[n+1], o[n+1];

    if ( n>0 && n<= 100 ) {
        for ( i=0; i<=n; i++ ) {
            cin >> c[i];
            if ( c[i] > 1000 ) break;
            o[i] = (n-i)*c[i]; 
        }
    } else if ( n==0 ) {
        cout << "0" << endl;
    }

    for ( i=0; i<n; i++ ) {
        cout << o[i] << " ";
    }

    return 0;
}