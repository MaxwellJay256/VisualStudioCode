#include <iostream>
using namespace std;

int main()
{
    int month;
    double total, avg, m;
    for ( month=0; month<=11; month++ ) {
        scanf("%lf", &m);
        total += m;
    }
    
    avg = total/12;
    printf("$%.2lf", avg);
    
    return 0;
}