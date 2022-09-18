#include<stdio.h>

struct date {           //结构类型声明可以在主函数内外
        int month;
        int day;
        int year;
    };

int main()
{
    struct date today;
    today = (struct date){ 9,31,2014 };
    struct date thismonth = {.month=9, .year=2022};

    struct date *pDate = &today;

    today.month = 9;
    today.day = 17;
    today.year = 2022;

    printf("Today is %i-%i-%i.\n",
        today.year, today.month, today.day);
    printf("This month is %i-%i-%i.\n", thismonth.year, thismonth.month, thismonth.day);//thismonth.day默认是0

    return 0;
}