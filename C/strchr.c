#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char s[] = "hello";
    char *p = strchr(s, 'l');
    printf("%s\n", p);
    //p = strchr(p+1, 'l');//找第二个‘l’
    //printf("%s\n", p);

    //输出‘l’之前的部分的方法
    char c = *p;//c：暂存p所指的那个'l'
    *p = '\0';//把第3位的'l'改写成'\0'，成为字符串的终点
    char *t = (char*)malloc(strlen(s)+1);
    strcpy(t, s);
    printf("%s\n", t);
    free(t);
    
    return 0;
}