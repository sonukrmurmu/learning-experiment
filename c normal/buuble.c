#include <stdio.h>
void main(){
    int arr[31]={23,235,2,42,4,2,4,3,5,2,4,3,6,5,14,57,445,4,7,65,244,6,7,45,85,85,7,5,74,7,75};
    int size = sizeof(arr)/4;
    for(int k = 0;k<size;k++){
        int i = 0, j =1;
        while(j<size-k){
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