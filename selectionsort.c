#include<stdio.h>
#include<stdlib.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[],int size)
{
    int i,j,k;
    for(i=0;i<size-1;i++)
    {
        for(j=k=i;j<size;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(&arr[i],&arr[k]);
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
    selectionSort(arr,size);
    printf("Sorted Array is :\n");
    for(int i =0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}