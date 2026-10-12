#include <stdio.h>
int *input(int *matrix,int rows,int column)
{
    for(int i = 0 ; i<=9; i++){
        scanf("%d",matrix+i);
    }
    return matrix;
}
int main(){
    int rows = 3, column = 3;
    int matrix[3][3];
    input((int *)matrix,rows,column);
    return 0;
}