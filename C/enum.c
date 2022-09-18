#include<stdio.h>

enum color { red=1, yellow=2, green=3, NumCOLORS, };//套路：NumCOLORS自动等于枚举量的个数

void f(enum color c)
{
    printf("%d\n", c);
}

int main(void)
{
    enum color t = red;

    scanf("%d", &t);
    f(t);

    return 0;
}