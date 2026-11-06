#include <stdio.h>
void sortsss(int *arr,int lowest,int highest){
    if(highest<=lowest){
        return;
    }else{
        int pivot = highest;
        int k = lowest;
        for(int i =  lowest;i<highest;i++){
            if(arr[pivot]>arr[i]){
                int temp = arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
                k++;
            }
        }
    int temp = arr[highest];
    arr[highest] = arr[k];
    arr[k] = temp;
    sortsss(arr,lowest,k-1);
    sortsss(arr,k+1,highest);
    }
}
int main(){
    int arr[10]={10,19,7,6,15,20,64,13,14,24};
    int size = sizeof(arr)/sizeof(int);
    sortsss(arr,0,size-1);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
        return 0;

}