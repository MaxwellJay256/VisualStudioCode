#include <stdio.h>

double Ohm_law(double voltage, double resistance)
{
    return voltage / resistance;
}

double series(double r1, double r2)
{
    return r1 + r2;
}

double parallel(double r1, double r2)
{
    return r1 * r2 / ( r1 + r2 );
}

double parallel_three(double r1, double r2, double r3)
{
    return 1.0 / ( 1.0/r1 + 1.0/r2 + 1.0/r3 );
}

int main(void)
{
    double V = 12.0;
    int r1=100, r2=200, r3=300, r4=400, r5=500, r6=600, r7=700;
    double r_;
    r_ = parallel_three(series(r1,r2), parallel(r3,r4), series(r5, parallel(r6,r7)));
    double I = Ohm_law(V, r_);
    printf("%.1fmA", I*1000);
}
