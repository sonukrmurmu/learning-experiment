#include <stdio.h>
int main()
{
    int n=3,m=3,on=3,om=3;
    int i,j;
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
  do
    {
        for(j=0;j<m;j++)
        {
            if(m-om)
            {
                continue;
            }else
            {
            printf("%d",matrix[i][j]);
            }
        }
        m--;
        for(i=0;i<n;i++)
        {
            if(n-on)
            {
                continue;
            }else
            {
                printf("%d",matrix[i][j]);
            }
        }
        n--;

        for(;j < m-om;j--)
        {
            if(m-om)
            {
                continue;
            }else
            {
                printf("%d",matrix[i][j]);
            }
        }
        for(;i<n-on;i--)
        {
            if(n-om)
            {
                continue;
            }else
            {
                printf("%d",matrix[i][j]);
            }
        }
    }while(n != on || m != om);
return 0;
}