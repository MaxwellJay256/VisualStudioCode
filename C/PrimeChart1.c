#include <stdio.h>  //输出规定个数的素数

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)
{
    int ret = 1;
    int i;
    for ( i=0; i<numberOfKnownPrimes; i++ ) {
        if ( x % knownPrimes[i] == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}

int main(void)
{
    const int number = 50;     //number：要输出的素数个数。
    int prime[number];
    prime[0] = 2;
    int count = 1;
    int i = 3;
    while ( count < number ) {
        if ( isPrime(i, prime, count) ) {
            prime[count++] = i;
        }
        i++;
    }
    for ( i=0; i<number; i++ ) {
        printf("%d", prime[i]);
        if ( (i+1)%5 ) printf("\t");     //输出时，每5个数字一行。
        else printf("\n");
    }
    return 0;
}