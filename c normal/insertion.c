#include <stdio.h>
void main(){
    int i = 0,j=i+1,k=0,temp,min_index=0;
    int arr[8]={4,2,6,1,6,0,2,5,};
    for(int i = 0; i < 8; i++){
        min_index = i;
        j=i+1;
    while(i < 8 && j < 8){
        if(arr[min_index    ]>arr[j]){
            min_index =j;
        }
        j++;
    }
    temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
    printf("%d ",arr[i]);
    k++;
}
}