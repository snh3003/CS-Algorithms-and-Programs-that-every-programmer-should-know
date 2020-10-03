#include <stdio.h>
//importing required functions

int binary_Search(int arr[],int x,int l, int r){
    if (r>=l){  //if condition for binary search
        int mid = l+(r-1)/2;  //finds the mid element of the array

        if (arr[mid]==x){
            return mid;
        }
        if (arr[mid]>x){
            return binary_Search(arr,x,l,mid-1);
        }
        if (arr[mid]<x){
            return binary_Search(arr,x,mid-1,r);
        }
        return -1;
    }
}

int main(void){
    int n,x;  //declares required variables
    printf("Enter number of elements: ");  //prompts the user for a number of elements
    scanf("%d",&n);  //reads the number of elements
    int nums[n];
    for (int i=0;i<n;i++) {  //prompts the user to enter all the elements
        printf("enter the element: ");
        scanf( "%d",&nums[i]);
    }
    int size = sizeof(nums)/sizeof(nums[0]);
    
    printf("Enter the number to search for: ");
    scanf("%d",&x);
    int result = binary_Search(nums,x,0,n-1);  //calls the binary search function
    (result == -1)?printf("Element is not found")
    :(printf("The number is found at %d",result));
    return 0;

}