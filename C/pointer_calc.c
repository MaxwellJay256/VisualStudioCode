#include<stdio.h>

int main(void)
{
    char ac[] = {0,1,2,3,4,5,6,7,8,9,-1,};
    char *p = ac;
    char *p1 = &ac[5];
    printf("p=   %p\n", p);
    printf("p+1= %p\n", p+1);
    //*(p+n) <-> ac[n]
    printf("p1-p=%d\n", p1-p);

    while ( *p != -1 ) {
        printf("%d\n", *p++);//*p++指令，先p++再指向地址
    }

    int ai[] = {0,1,2,6,4,5,17,7,8,9,};
    int *q = ai;
    int *q1 = &ai[6];
    printf("*q=  %d\n", *(q+3));
    printf("q=   %p\n", q);
    printf("q1=  %p\n", q1); 
    //区别：char占1个字节，int占4个字节
    printf("q1-q=%d\n", q1-q);

    return 0;
}