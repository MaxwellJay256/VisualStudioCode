#include <iostream>
using namespace std;

int main()
{
    double inc[11];
    int month;
    double total, avg;
    for ( month=0; month<=11; month++ ) {
        scanf("%lf", &inc[month]);
        total += inc[month];
    }
    avg = total/12;
    printf("$%.2lf\n", avg);
    
    return 0;
}