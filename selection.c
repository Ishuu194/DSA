#include<stdio.h>
void selectionsort(int arr[], int size)
{
    int i, j, minIndex, temp;
    for(i = 0; i < size -1; i++ )
    {
        minIndex = i;
        for(j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        temp =  arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void printarray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={8, 3, 2, 9, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: \n");
    printarray(arr, size);

   selectionsort(arr, size);

   printf("Sorted array:\n");
   printarray(arr, size);
    
   return 0;
}