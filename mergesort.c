#include<stdlib.h>
#include<stdio.h>
int main()
{
	int arr[] = {12, 11, 11, 5, 6, 7};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("Given array is \n");
	printArray(arr, arr_size);
    mergeSort(arr, 0, arr_size - 1);
    printf("\nafter merge sort\n");
	printArray(arr, arr_size);
}
 void merge(int arr[], int l, int m, int r)
{
	int left, right, k;
	int left_end = m - l + 1;
	int right_end = r - m;
    int L[left_end], R[right_end];
	for (left = 0; left < left_end; left++)
		L[left] = arr[l + left];
	for (right = 0; right < right_end; right++)
		R[right] = arr[m + 1+right];

	left = 0;
	right = 0;
	k = l;
	while (left <left_end && right < right_end)
	{
		if (L[left] <= R[right])
		{
			arr[k] = L[left];
			left++;
		}
		else
		{
			arr[k] = R[right];
			right++;
		}
		k++;
	}
	while (left < left_end)
	{
		arr[k] = L[left];
		left++;
		k++;
	}
	while (right < right_end)
	{
		arr[k] = R[right];
		right++;
		k++;
	}
}
void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}
void printArray(int A[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}
