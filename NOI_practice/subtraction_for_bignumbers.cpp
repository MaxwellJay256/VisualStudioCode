#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
	string s1, s2;
	getline (cin, s1);
	getline (cin, s2);
	int len1 = s1.length();
	int len2 = s2.length();
	int j=0;
	int a1[len1], a2[len2], a3[len1];
	for (int i=len1-1; i>=0; i--) {
		a1[j++] = s1[i] - '0';
	}
	j=0;
	for (int i=len2-1; i>=0; i--) {
		a2[j++] = s2[i] - '0';
	}
	
	int count=0, tmp=0;
	for ( int i=0; i<len2; i++) {
		if ( a1[i] >= a2[i] ) {
			a3[count++] = a1[i] - a2[i];
		} else {
			a1[i] = 10 + a1[i];
			a3[count++] = a1[i] - a2[i];
			if ( a1[i+1] > 0) {
				a1[i+1] = a1[i+1] - 1;
			} else {
			for (int j=i+1; j<len1; j++) {
				if ( a1[j] == 0 ) {
						a1[j] = 9;
					} else {
						a1[j] = a1[j] - 1;
						break; 
					} 
				}
			}
		}
	}
	for (int i=len2; i<len1; i++) {
		a3[count++] = a1[i];
	}
 
	tmp = count;
	for (int i=tmp-1; i>0; i--) {
		if (a3[i] == 0) {
			count--;
		} else {
			break;
		}
	}
	for (int i=count-1; i>=0; i--) {
		printf ("%d", a3[i]);
	}
    return 0;
}