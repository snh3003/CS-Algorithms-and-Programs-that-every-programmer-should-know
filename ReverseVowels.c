#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    char s[100000],c[100000];
    scanf("%s",s);
    int i=0,j=0;
    //trumpisshit
    while(s[i])//sroring vowels in Array c
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            c[j++]=s[i];//c[0]='u', c[1]='i',c[2]='i',j==3
        i++;
    }
    i=0;
    while(s[i])//print op
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            printf("%c",c[--j]);
        else
            printf("%c",s[i]);
        i++;
    }
    
    return 0;
}