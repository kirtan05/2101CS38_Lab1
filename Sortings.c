#include <math.h>
#include <stdio.h>
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
  
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
  
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
// A  function to print an array of size n
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/* Driver program to test insertion sort */
int main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	int arr[n];
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("Enter Your Choice 1. Insertion Sort 2. Selection Sort  ");
	int op;
	scanf("%d",&op);
	switch(op)
	{
	case 1:
	insertionSort(arr, n);
	printf("Array after Insertion Sort is : \n");
	printArray(arr, n);
	break;
	case 2:
	selectionSort(arr,n);
	printf("Array after Selection Sort is : \n");
	printArray(arr, n);
	break;
    default:
      printf("Error! Option chosen is not correct");

	}

	return 0;
}
