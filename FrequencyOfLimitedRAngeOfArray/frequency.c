#include<stdio.h>
#include<stdlib.h>
    
int main()
{
    int n=9;
    int arr[n] = {9,2,5,7,9,2,2,1,4};
    int arr1[n];
        for(int i=1;i<n+1;i++){
            arr1[i]=0;
        }
        for(int i=0;i<n;i++){
            arr1[arr[i]]+=1;
        }
        for(int i=1;i<n+1;i++){
            printf("%d",arr1[i]);
        }
    return 0;
}