#include <iostream>
#include<unordered_set>
using namespace std;
void findTriplet(int arr[], int n) 
{ 
    bool found = false; 
    for (int i=0; i<n-1; i++) 
    {
        unordered_set<int> s; 
        for (int j=i+1; j<n; j++) 
        { 
            int x = -(arr[i] + arr[j]); 
            if (s.find(x) != s.end()) 
            { 
                cout<<arr[i]<<" "<<x<<" "<<arr[j]<<endl; 
                found = true; 
            } 
            else
                s.insert(arr[j]); 
        } 
    }  
} 
int main() {
	int arr[5];
  for(int i=0;i<5;i++)
    cin>>arr[i];
  findTriplet(arr,5);
	return 0;
}
