#include <stdio.h>

int main(){
    int arr[6]={0,1,0,3,13,0};
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<6;j++){
            if(arr[j]<arr[i])
            {
                arr[j]=arr[j]+arr[i];
                arr[i]=arr[j]-arr[i];
                arr[j]=arr[j]-arr[i];
            }}

    }
    for(i=0;i<6;i++){
        printf("%d",arr[i]);
    }
    return 0;
}