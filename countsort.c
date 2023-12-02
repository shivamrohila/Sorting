#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int findMax(int arr[],int size)
{
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
void countSort(int arr[],int size)
{
    int i,j,max,*c;
    max=findMax(arr,size);
    c = (int*)malloc(sizeof(int)*(max+1));
    for(i=0;i<max+1;i++)
    {
        c[i]=0;
    }
    for(i=0;i<size;i++)
    {
        c[arr[i]]++;
    }
    i =0;j=0;
    while(j<max+1) // j in dynamic array
    {
        if(c[j]>0)
        {
            arr[i]=j;
            c[j]--;
            i++;
        }
        else
        {
            j++;
        }
    }
    free(c);
    c =NULL;
}
int main()
{
   int arr[]= {10,5,2,3,11,1,5,13,15,3};
   int i,size =10;
   countSort(arr,size);
   for(i=0;i<size;i++)
   {
    printf("%d ", arr[i]);
   }
}