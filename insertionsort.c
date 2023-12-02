#include<stdio.h>
#include<stdlib.h>
void insertionSort(int arr[],int size)
{
    int i,j,x;
    for(i=1;i<size;i++)
    {
        j=i-1;
        x=arr[i];
        while(j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    
}
int main()
{
    int size;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertionSort(arr,size);
    printf("Sorted Array is :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}