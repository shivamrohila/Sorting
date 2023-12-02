#include<stdio.h>
#include<stdlib.h>
void swap(int*x,int*y)
{
    int temp = *x;
    *x=*y;
    *y=temp;
}
int partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i=l,j=h;
    do
    {
        do
        {
            i++;
        } while (arr[i]<=pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
        }
    } while (i<j);
    swap(&arr[l],&arr[j]);
    return j;
}
void quickSort(int arr[],int l, int h)
{
    int j;
    if(l<h)
    {
        j = partition(arr,l,h);
        quickSort(arr,l,j);
        quickSort(arr,j+1,h);
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
    int l=0,h=size;
    quickSort(arr,l,h);
    printf("Sorted Array is :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}