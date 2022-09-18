#include <iostream>
using namespace std;

/*int pell(int n)
{
    int a[100000];
    a[0] = 1;
    a[1] = 2;
    for ( int i=2; i<n; i++ ) {
        a[i] = 2*a[i-1] + a[i-2];
    }

    return a[n-1];
}*/

int main()
{
    long long int x;
    cin >> x;
    int num[x];
    for ( int i=0; i<x; i++ ) {
        cin >> num[i];
    }

    long long a[100000];
    a[0] = 1;
    a[1] = 2;
    for ( long i=2; i<99999; i++ ) {
        a[i] = 2*a[i-1] + a[i-2];
    }

    for ( int i=0; i<x; i++ ) {
        cout << a[num[i]-1] % 32767 << endl;
    }

    return 0;
}