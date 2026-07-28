#include<stdio.h>
int sort(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[], int start , int end)
{
    int pivot=arr[start];
    int i=start+1;
    int j;
    for(j=start+1 ; j<=end ;j++)
    {
        if (arr[j] < pivot)
        {
            sort(&arr[i], &arr[j]);
            i++;
        }
    }
    sort(&arr[start], &arr[i-1]);
    return i-1;
}

void quicksort(int arr[], int start, int end)
{
    if(start < end)
    {
        int pivotIndex = partition(arr, start, end);
        quicksort(arr, start, pivotIndex -1);
        quicksort(arr, pivotIndex +1, end);
    }
}

void printarray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={7, 6, 3, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printarray(arr, n);

    quicksort(arr, 0,n-1);

    printf("Sorted array:\n");
    printarray(arr , n);

    return 0;
}