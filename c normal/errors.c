#include <stdio.h>

int var = 10; // Global variable

void fun() 
{
   printf("Inside fun(): %d\n", var);
}

int main()
{
   int var = 10;
   printf("First print: %d\n", var);
   {
      int var = 2;
      printf("Second print: %d\n", var);
      
      fun(); 
   }
   return 0;
}