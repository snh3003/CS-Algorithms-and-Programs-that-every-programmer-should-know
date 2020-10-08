#include<iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row>>col;
    int arr[100][100] = {0};
    cout<<"Enter the 2D Array elements:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //print the wave pattern
    for(int c=0;c<col;c++){
        
        if(c%2==0){
            // print top to bottom
            for(int r=0;r<row;r++){
                cout<<arr[r][c]<<" ";
            }
        }
        else{
            // print bottom to top
            for(int r=row-1;r>=0;r--){
                cout<<arr[r][c]<<" ";
            }
        }
    }
    return 0;
}