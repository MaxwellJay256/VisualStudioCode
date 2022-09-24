#include<stdio.h>
int a,b;
int t;
int GCD()
{
    
    if (a<b)
        t = a;
    else
        t = b;
    for ( ; ;t--)
    {
        if ( a%t==0 && b%t==0 )
            break;
    }
    return t;
}

int main()
{
    scanf("%d %d", &a, &b);
    printf("%d", GCD());
    return 0;
}