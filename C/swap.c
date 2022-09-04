#include <stdio.h>

void swap(int *pa, int *pb)    //指针应用场景：函数需要返回多个变量。
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main(void)
{
    int a = 5;
    int b = 6;
    swap (&a, &b);
    printf("a=%d, b=%d\n", a, b);
    
    return 0;
}