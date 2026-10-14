#include <stdio.h>
void main(){
    int arr[8]={3,7,5,9,4,2,1,0};
    int size = sizeof(arr)/4;
    for(int k = 0;k<8;k++){
        int i = 0, j =1;
        while(j<8-k){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            i++;
            j++;
        }

    }
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}