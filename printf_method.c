/*
Author: yizhi wang
Purpose:enum and char
Date:2022/12/3

*/
#include <stdio.h>
#include <stdbool.h>

int main(){
   int intVar = 100;
   float floatVar = 331.79;
   double doubleVar = 8.44e+11;
   char charVar = 'W';
   bool boolVar = 0;
   
   printf("intVar = %i\n",intVar);
   printf("floatVar = %.2f\n", floatVar);
   printf("doubleVar = %e\n",doubleVar);
   printf("doubleVar = %g\n",doubleVar);
   printf("charVar = %c\n", charVar);
   printf("boolVar = %i\n", boolVar);
   return 0;

}