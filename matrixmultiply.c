#include <stdio.h>
int main()
{
 printf("Enter the first the matrix");
  int i,j,k;
  long long int matrix1[3][3];
  long long int matrix2[3][3];
  long long int matrixans[3][3]={0};
  {
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%lld",&matrix1[i][j]);
        }
    }
 }
 printf("Enter Second Matrix");
 {
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%lld",&matrix2[i][j]);
        }
    }
 }

 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            matrixans[i][j] += matrix1[i][k]*matrix2[k][j];
        }
    }
 }
 printf("Now Answer Matrix\n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
        printf(" %lld ",matrixans[i][j]);
    }
    printf(" \n");
 }
 return 0;
}


