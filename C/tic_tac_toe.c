#include <stdio.h>

int main(void)
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX;
    int numOfO;
    int result = -1;   //   -1��û��Ӯ��1��XӮ��0:OӮ��

    //�������
    for ( i=0; i<size; i++ ) {
        for ( j=0; j<size; j++ ) {
            scanf("%d", &board[i][j]);
        }
    }

    //�����
    for ( i=0; i<size && result == -1; i++) {
        numOfO = numOfX = 0;
        for ( j=0; j<size; j++ ){
            if ( board[i][j] == 1 ){
                numOfX ++;
            } else {
                numOfO ++;
            }
        }
        if ( numOfO == size ) {
            result = 0;
        } else if ( numOfX == size ){
            result = 1;
        }
    }

    //�����
    if ( result == -1 ) {
        for ( j=0; j<size && result == -1; j++) {
            numOfO = numOfX = 0;
            for ( i=0; i<size; i++ ){
                if ( board[i][j] == 1 ){
                    numOfX ++;
                } else {
                    numOfO ++;
                }
            }
            if ( numOfO == size ) {
                result = 0;
            } else if ( numOfX == size ){
                result = 1;
            }
        }
    }

    //���Խ���
    if ( result == -1 ) {
        numOfO = numOfX = 0;
        for ( i=0; i<size; i++) {
            if ( board[i][i] == 1 ){
                numOfX ++;
            } else {
                numOfO ++;
            }
        }
            if ( numOfO == size ) {
                result = 0;
            } else if ( numOfX == size ){
                result = 1;
            }
    }

    if ( result == -1 ) {
        numOfO = numOfX = 0;
        for ( i=0; i<size; i++) {
            if ( board[i][size-i-1] == 1 ){
                numOfX ++;
            } else {
                numOfO ++;
            }
        }
            if ( numOfO == size ) {
                result = 0;
            } else if ( numOfX == size ){
                result = 1;
            }
    }

    if ( result == 0 ) {
        printf("O��Ӯ��\n");
    } else if ( result == 1 ) {
        printf("X��Ӯ��\n");
    } else {
        printf("û����Ӯ��\n");
    }

    return 0;
}