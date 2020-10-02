// Descending order
// Selection Sort 
#include <stdio.h>
#include <time.h>

void selection_sort(int arr[], int l);
void main()
{
	int arr[10], l, i;
	srand(time(0));
	printf("\n\n\n The given array is :\n");
	for(i=0; i<10; i++)
	{
		arr[i] = rand()%100;
		printf("%d  ", arr[i]);
	}
	l = sizeof(arr)/sizeof(int);
	selection_sort(arr, l);
	printf("\n\n\n The sorted array is :\n");
	for(i=0; i<10; i++)
	{
		printf("%d  ", arr[i]);
	}
}

void selection_sort(int arr[], int l)
{
	int i, j, temp, max;
	for(i=0; i<l-1; i++)
	{
		max = i;
		for(j=i+1; j<l; j++)
		{
			if(arr[j]>arr[max])
			{
				max = j;
			}			
		}
		temp = arr[i];
		arr[i] = arr[max];
		arr[max] = temp;
	}
}

