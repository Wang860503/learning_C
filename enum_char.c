/*
Author: yizhi wang
Purpose:enum and char
Date:2022/12/3

*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    /*
    char MyCgacter = '\n';
    printf("%c",MyCgacter);
    */
   enum gender {male, female};
   enum gender MyGender = female;
   bool ismale = (MyGender == 0);

    printf("%i",ismale);

}