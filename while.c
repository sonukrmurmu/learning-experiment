#include <stdio.h>
int main()
{
    int n;
    printf("enter the number upto you want to print star traingle\n");
    scanf("%d",&n);
    printf("\n");
    int i=1,j;
    while(i<n)
    {
        j=1;
        while(j<i+1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}