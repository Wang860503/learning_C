/*
Author: yizhi wang
Purpose:enum test
Date:2022/12/4
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("The XEROX is : %i\n",xerox);
    printf("The GOOGLE is : %i\n",google);
    printf("The EBAY is : %i\n",ebay);

    return 0;
}