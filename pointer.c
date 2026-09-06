#include <stdio.h>
int pointer(int *,int *,int *);
int main(){
    int a = 10;
    int b = 20;
    int c;
    pointer(&a,&b,&c);
    printf("%d %d\n",c,a);
    printf("%d",pointer(&a,&b,&c));
}
int pointer(int *a , int *b , int *c){
    *c = *a+*b;
    a=b;
    int d = *c;
    return d;
}