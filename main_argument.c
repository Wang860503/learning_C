/*
Author: yizhi wang
Purpose:enum and char
Date:2022/12/3

*/
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
   int numberOfArguments = argc;
   char *argument1 = argv[0];
   char *argument2 = argv[1];

   printf("Number of Arguments:%d\n", numberOfArguments);
   printf("argument1 is the program name: %s\n",argument1);
   printf("argument2 is the commend line argument: %s\n",argument2);
   return 0;

} 