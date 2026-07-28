#include<stdio.h>
void printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}
}
void bubblesort(int arr[],int size)
{
	int i,j,temp;
	for(i =0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int arr[]={5,7,8,2,9};
	int size=sizeof(arr) / sizeof(arr[0]);
	printf("Original Array: \n");
	printarray(arr,size);
	printf("\n");
	bubblesort(arr,size);
	printf("\nSorted Areay: \n");
	printarray(arr, size);
	return 0;
}