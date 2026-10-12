#include <stdio.h>
void binary(int arr[],int target,int low,int high);
int main(){
    int arr[] = {0,1,2,3,4,5};
    int target = 4; //value to be match
    int low = 0;
    int high = (sizeof(arr)/4)-1;
    binary(arr,target,low,high);
    return 0;
}

void binary(int arr[],int target, int low, int high){
    int mid = (low+high)/2;
    if(arr[mid] > target){
        while(arr[mid] != target){
            --mid;
        }
    }
    else if(arr[mid] < target){
        while(arr[mid]<target){
            ++mid;
        }
    }
    printf("%d is the required index",mid);
}