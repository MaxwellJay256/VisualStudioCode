#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number, i;
    int *a = NULL;
    printf("Input number:");
    scanf("%d", &number);
    //int a[number]
    a = (int*)malloc(number*sizeof(int));
    printf("%p\n", a);
    for ( i=0; i<number; i++ ) {
        scanf("%d", &a[i]);
    }

    for ( i=number-1; i>=0; i-- ) {
        printf("%d ", a[i]);
    }

    free(a);//使用后要把分配的内存还回去
    return 0;
}