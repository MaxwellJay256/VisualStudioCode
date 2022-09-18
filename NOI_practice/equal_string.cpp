#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000], b[1000];
	int i = 0, j = 0; 
    cin.getline(a,100);
    cin.getline(b,100);
	int l1 = strlen(a);
	int l2 = strlen(b);
    
    while ( i<l1 || j<l2 ) {
		if ( a[i] == ' ' ) {
			i++;
		} else if ( b[j] == ' ' ) {
			j++;
		} else {
			if ( a[i] == b[j] || a[i] == b[j]+32 || a[i]+32 == b[j] ) {
				i++;
				j++;
			} else {
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	cout << "YES" << endl;
	return 0;
}