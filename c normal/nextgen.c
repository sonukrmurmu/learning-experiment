#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three numbers");
    scanf("%d %d %d",&a, &b, &c);
    if(a>b && a>c)
    {
        printf("a is greater\n  ");
        if(b>c)
        printf("c is smallest\n");
    else
    printf("b is smallest\n");
    }
    else if(b>c && b>a)
    {
        printf("print b is greater\n");
        if(c>a)
        printf("a is smallest\n");
    else
    printf("c is smallest\n");
    }
    else
    {
        printf("print c is greater\n");
        if(a>b)
        printf("b is smallest\n");
    else
    printf("a is smallest");
    }
    
    return 0;
}