// Ascending order
// Insertion Sort

#include <stdio.h>
#include <time.h>

void insertion_sort(int arr[], int l);
void main()
{
	int arr[10], i, l;
	srand(time(0));
	printf("\n\n\n The given array is : \n");
	for(i=0; i<10; i++)
	{
		arr[i] = rand()%100;
		printf("%d  ", arr[i]);
	}
	l = sizeof(arr)/sizeof(int);
	insertion_sort(arr, l);
	printf("\n\n\n The sorted array is : \n");
	for(i=0; i<10; i++)
	{
		printf("%d  ", arr[i]);
	}
}

void insertion_sort(int arr[], int l)
{
	int i, j, current;
	for(i=1; i<l; i++)
	{
		current = arr[i];
		j = i;
		
		while(j>0 && current<arr[j-1])
		{
			arr[j] = arr[j-1];
			arr[j-1] = current;
			j--;
		}
	}
	
}
