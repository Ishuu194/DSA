#include<stdio.h>
// Merge Function
int merge(int arr[], int start, int mid, int end)
{
    int i,j,k;

    int sizeL = mid - start + 1;
    int sizeR = end - mid;

    int L[sizeL], R[sizeR];

    //copy element to left array
    for(i=0; i < sizeL; i++)
        L[i] = arr[start +i];

    //copy elements to right array
    for(j=0; j<sizeR; j++)
         R[j] =arr[mid + 1 + j];

    i=0;    //Left array
    j=0;    //Right array
    k=start;    //for merged array

    //Merge the temporary arrays
    while(i < sizeL && j < sizeR)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++; //left array index increase
        }
        else
        {
            arr[k] = R[i];
            j++; //Right array index increase
        }
        k++;  ////merged array index increase
    }

    // remaining elements of left array copy
    while(i < sizeL)
    {
        arr[k] = L[i];
        i++;
        j++;
    }
    // remaining elements of Right array copy 
    while(j < sizeR)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

//Merge Sort Function
void mergesort(int arr[], int start, int end)
{
    if(start < end)
    {
        int mid = (start + end) /2;

        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);

        merge(arr, start, mid, end); // combine all element
    }
}
void printarray(int arr[], int size)
{
    int i;
    for(i -0; i< size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {7, 6, 3, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printarray(arr, size);

    mergesort(arr, 0, size-1);  //array startIndex and endIndex

    printf("\nSorted array is \n");
    printarray(arr, size);

    return 0;
}