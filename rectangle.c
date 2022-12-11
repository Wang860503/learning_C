/*
Author: yizhi wang
Purpose:calculate rectangle area
Date:2022/12/2
 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    double height = atof(argv[1]);
    double width = atof(argv[2]);
    double perimeter = 0.0;
    double area = 0.0;
    //canf("%lf,%lf",&height, &width);
    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("The perimeter is : %f\n",perimeter);
    printf("The area is : %f\n",area);
}