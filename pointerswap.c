#include <stdio.h>
int swap(int *a , int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return 0;
}
int main()
{
   int a = 10;
    int b=20;
    swap(&a,&b);
    printf("the swapped value of a is %d",a);
    printf("the swap value of b is %d ",b);
    return 0;
}