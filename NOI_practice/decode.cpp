#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[200], b[200];
    cin.getline(a,200);
    int len = strlen(a);
    int i;

    for ( i=0; i<len; i++ ) {
        if ( a[i]<=64 || (a[i]>=91 && a[i]<=96) || a[i]>=123 ) {
            b[i] = a[i];
        } else if ( (a[i]>=65 && a[i]<=69) || (a[i]>=97 && a[i]<=101) ) {
            b[i] = a[i]+21;
        } else {
            b[i] = a[i]-5;
        }
    }

    for ( i=0; i<len; i++ ) {  
        cout << b[i];
    }
    return 0;
}