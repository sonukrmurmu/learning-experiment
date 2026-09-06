#include <stdio.h>
int main()
{
    int limit;
    int n = 2;
    int a=1,b=1,c=1;
    printf("Enter the Number to see fibonacci series upto\n");
    scanf("%d",&limit);
    while(n <= limit)
    {
        int modds = n%2;
        if(modds == 0)
        {a=c,c=b+c;}
        else
        {b=c,c=a+c;}
        printf(" %d ",c);
        n++;
    }
    return 0;
}