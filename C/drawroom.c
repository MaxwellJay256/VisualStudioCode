#include <stdio.h>

void drawRoom(int width, int length, int x, int y);
void DrawBorder(int width);
void DrawLineWithoutPlayer(int width);
void DrawLineWithPlayer(int width, int x);

int main()
{
    drawRoom(2,2,0,1);
    drawRoom(5,3,1,2);
    drawRoom(14,8,8,5);
    getchar();
    return 0;
}

void drawRoom(int width, int length, int x, int y)
{
    DrawBorder(width);
    int i;
    for ( i=0; i<y-1; i++ ) {
        DrawLineWithoutPlayer(width);
    }
    DrawLineWithPlayer(width, x);
    for ( ; i<length-1; i++ ) {
        DrawLineWithoutPlayer(width);
    }
    DrawBorder(width);
}
void DrawBorder(int width)
{
    printf("+");
    for ( int i=0; i<width; i++ ) {
        printf("-");
    }
    printf("+\n");
}
void DrawLineWithoutPlayer(int width)
{
    printf("|");
    for ( int i=0; i<width; i++ ) {
        printf(".");
    }
    printf("|\n");
}
void DrawLineWithPlayer(int width, int x)
{
    int i;
    printf("|");
    for ( i=0; i<x-1; i++ ) {
        printf(".");
    }
    printf("@");
    for ( ; i<width-1; i++ ) {
        printf(".");
    }
    printf("|\n");
}