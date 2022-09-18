#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double f(double x)
{
    double ret;
    ret = x*x*x*x*x-15*x*x*x*x+85*x*x*x-225*x*x+274*x-121;
    return ret;
}

int main(void)
{
    double l=1.5, r=2.4;
    double mid;
    while ( r-l>0.000001 ) {
        mid = (l+r)/2;
        if ( f(mid)>0 ) {
            l = mid;
        } else {
            r = mid;
        }
    }

    printf("%.6f\n", mid);
    return 0;
}