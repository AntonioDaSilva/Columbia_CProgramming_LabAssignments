// Best case occurs when partition process always picks middle element as pivot
// Worst case occurs when the partition always picks greates or smallest element as pivot

#include <stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
    int pvt = arr[high]; 
    int i = (low - 1);  

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pvt)
        {
            i++;    
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pi = partition(arr, l, h);

        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, h);
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}


int main()
{
  int len;
  printf("Please enter number of elements: ");
  scanf("%d",&len);
  int arr[len];
  for (int i = 0; i<len; i++){
    printf("Element number %d: ",i);
    scanf("%d",&arr[i]);
  }
  int n = sizeof(arr)/sizeof(arr[0]);
  quickSort(arr, 0, n-1);
  printf("Sorted array: ");
  printArray(arr, n);
  printf("\n");
  return 0;
}
