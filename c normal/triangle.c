#include <stdio.h>
int main()
{ int n,i,j;
    printf("Enter the number upto print square");
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}