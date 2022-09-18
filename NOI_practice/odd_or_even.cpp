#include <iostream>
using namespace std;

int main()
{
    int n, mod;
    cin >> n;
    mod = n % 2;

    if ( mod==0 ) {
        cout << "even\n";
    } else {
    	cout << "odd\n";
	} 

    return 0;
}
