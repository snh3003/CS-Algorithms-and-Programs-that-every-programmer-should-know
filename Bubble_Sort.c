#include<stdio.h>
 
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void bubblesort(int arr[], int n){
    int i, j;
    for(i = 0; i < n-1; i++){
        for (j=0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]); 
            }
        }
    }
}
 
 
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    printf("Enter the array elements one by one: ");
    printf("\n");
    for(i=0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    printf("\n");
    printf("Array after sorting: ");
    for( int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    return 0;
}
