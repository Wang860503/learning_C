/*
Author: yizhi wang
Purpose:This program is minutes to years and days
Date:2022/12/2

*/
#include <stdio.h>

int main(){
    int minutes=0;
    double MinutesInDay = 1440;
    double DaysInYear = 365;

    int days =0; 
    int years = 0;

    printf("Enter a minutes :");
    scanf("%i",&minutes);
    days = minutes / MinutesInDay;
    years = days / DaysInYear;
    printf("%d Year %d Days %d minutes\n", years, days, minutes);
    return 0;
}