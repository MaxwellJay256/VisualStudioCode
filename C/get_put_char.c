#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int ch;
    while ( (ch=getchar()) != EOF ) {
        putchar(ch);
    }
    printf("EOF\n");
    

   /*
    int i;
    for ( i=0; i<argc; i++ ) {
        printf("%d:%s\n", i, argv[i]);
    }
    */

    return 0;
}