#include <stdio.h>
int fibo(int n,int limits)
{
   static int a = 1, b = 1 , c = 1;
   int mods = n%2;
    printf(" %d ",c);
   if(n>limits)
   {return 0;}
   else if(mods == 0)
   {
      b=c,c=a+c;
      fibo( n+1, limits);
   }
   else
   {
      a=c,c=b+c;
      fibo( n+1 , limits);
   }
   
}

int main()
{
   int limits;
   int n=0;
   printf("Enter a Number to print fibonacci sequence upto\n");
   scanf("%d",&limits);
   fibo(n,limits);
   return 0;
}