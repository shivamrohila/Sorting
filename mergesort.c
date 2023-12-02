#include<stdio.h>
#include<stdlib.h>
void merge(int arr[], int s, int e) {

	int mid = (s+e)/2;

	int lenLeft = mid - s + 1;
	int lenRight = e - mid;

	int *left = (int *)malloc(lenLeft * sizeof(int));
    int *right = (int *)malloc(lenRight * sizeof(int));

	int k = s;
	for(int i=0; i<lenLeft; i++) {
		left[i] = arr[k];
		k++;
	}

	k = mid+1;
	for(int i=0; i<lenRight; i++) {
		right[i] = arr[k];
		k++;
	}

	
	int leftIndex = 0;
	int rightIndex = 0;
	int mainArrayIndex = s;

	while(leftIndex < lenLeft &&  rightIndex < lenRight) {
		
		if(left[leftIndex] < right[rightIndex] ) {
			arr[mainArrayIndex] =  left[leftIndex];
			mainArrayIndex++;
			leftIndex++;
		}
		else {
			arr[mainArrayIndex] =  right[rightIndex];
			mainArrayIndex++;
			rightIndex++;
		}
	}


	
	while(rightIndex < lenRight) {
		arr[mainArrayIndex] =  right[rightIndex];
		mainArrayIndex++;
		rightIndex++;
	}
	

	while(leftIndex < lenLeft) {
		arr[mainArrayIndex] =  left[leftIndex];
		mainArrayIndex++;
		leftIndex++;
	}
	free(left);
	free(right);
}

void mergeSort(int arr[], int s, int e) {
	if(s >= e) {
		return;
	}
	int mid = (s+e)/2;
	//recusive call for left array
	mergeSort(arr,s, mid);
	//recusive call for right array
	mergeSort(arr, mid+1, e);
	//merge 2 sorted arrays
	merge(arr, s, e);
}

int main() {

	int size;
    printf("Enter the size of the array :\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in array :\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
	int s = 0;
	int e = size - 1;
    printf("Before Merge Sort :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    mergeSort(arr,s,e);
    printf("After Merge Sort :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }


	return 0;
}