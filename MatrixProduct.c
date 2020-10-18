#include<stdio.h>    
#include<stdlib.h>  
int main(){  
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,n,m;    
    scanf("%d",&r);    
    scanf("%d",&c);       
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);    
        }    
    }
    scanf("%d",&n);    
    scanf("%d",&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }    
    }  
    if(r==n && c==m){
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                mul[i][j]=0;
                for(k=0;k<c;k++){
                    mul[i][j]+=a[i][k]*b[k][j];
                }    
             }    
        }   
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d ",mul[i][j]);
            }    
            printf("\n");    
       }    
    }
    else{
       printf("-1");
    }
    return 0;  
}