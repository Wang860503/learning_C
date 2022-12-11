/*
Author: yizhi wang
Purpose:This program scan from screen
Date:2022/12/2

*/
#include <stdio.h>

int main(){
    char str[100];
    int i;
    double x;

    printf("Enter a value :");
    //scanf("%d %s",&i, str);   
    //printf("\nYou entered: %d  %s\n", i, str);
    scanf("%lf",&x);
    printf("\nYou entered: %f\n", x);
    return 0;
}