#include <stdio.h>

int main(void)
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numOfX;
    int numOfO;
    int result = -1;   //   -1：没人赢；1：X赢；0:O赢。

    //读入矩阵
    for ( i=0; i<size; i++ ) {
        for ( j=0; j<size; j++ ) {
            scanf("%d", &board[i][j]);
        }
    }

    //检查行
    for ( i=0; i<size && result == -1; i++) {
        numOfO = numOfX = 0;
        for ( j=0; j<size; j++ ) {
            if ( board[i][j] ) {
                numOfX ++;
            } else {
                numOfO ++;
            }
        }
        if ( numOfO == size ) {
            result = 0;
        } else if ( numOfX == size ) {
            result = 1;
        }
    }

    //检查列
    if ( result == -1 ) {
        for ( j=0; j<size && result == -1; j++) {
            numOfO = numOfX = 0;
            for ( i=0; i<size; i++ ){
                if ( board[i][j] ) {
                    numOfX ++;
                } else {
                    numOfO ++;
                }
            }
            if ( numOfO == size ) {
                result = 0;
            } else if ( numOfX == size ) {
                result = 1;
            }
        }
    }

    //检查对角线
    if ( result == -1 ) {
        numOfO = numOfX = 0;
        for ( i=0; i<size; i++) {
            if ( board[i][i] ) {
                numOfX ++;
            } else {
                numOfO ++;
            }
        }
            if ( numOfO == size ) {
                result = 0;
            } else if ( numOfX == size ) {
                result = 1;
            }
    }

    if ( result == -1 ) {
        numOfO = numOfX = 0;
        for ( i=0; i<size; i++) {
            if ( board[i][size-i-1] ) {
                numOfX ++;
            } else {
                numOfO ++;
            }
        }
            if ( numOfO == size ) {
                result = 0;
            } else if ( numOfX == size ) {
                result = 1;
            }
    }

    if ( result == 0 ) {
        printf("O方赢。\n");
    } else if ( result == 1 ) {
        printf("X方赢。\n");
    } else {
        printf("没有人赢。\n");
    }

    return 0;
}