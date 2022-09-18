#include<stdio.h>
#include<string.h>

//char *dst = (char*)malloc(strlen(src)+1)
char* mycpy(char* dst, const char* src)
{
    int idx = 0;
    char *ret = dst;
    while ( src[idx] != '\0' ) {
        dst [idx] = src [idx];
        idx ++;
    }
    dst[idx] = '\0';
    return ret;
}

int main(int argc, char const *argv[])
{
    char s1[3];
    char s2[] = "abc";
    strcpy(s1, s2);
    printf("%s\n", s1);
    return 0;
}