#include <iostream>
using namespace std;

int main()
{
	long long A, B;
	long long product;
	cin >> A >> B;
	
	if ( A>=1 && B<=50000 && B>0 ) {
		product = A * B;
		cout << product << endl;
	}
	
	return 0;
 } 
