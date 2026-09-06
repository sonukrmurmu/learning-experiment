#include <stdio.h>
int maxmin(int arr[],int size,int *max, int *min)
{
    *min=arr[0];// array just contains the memory address
    for(int i=1;i<size;i++)
    {
        if(*min>arr[i])
        {
            *min=arr[i];
        }
    }
    *max=arr[0]; //arr[i]contains the elements
    for(int j = 0;j<size;j++)
    {
        if(*max<arr[j])
        {
            *max=arr[j];
        }
    }

    return 0;
}

int main()
{
    int arr[6]={6,2,1,9,0,4};
    int min,max;
    maxmin(arr,6,&max,&min);
    printf("maximum value in this array is %d",max);
    printf("minimum value in this array is %d",min);
    return 0;

}