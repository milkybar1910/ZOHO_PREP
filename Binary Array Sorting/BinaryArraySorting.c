/*
Input:
N = 5
A[] = {1,0,1,1,0}
Output: 0 0 1 1 1

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=5;
    int arr[] = {0,1,0,1,1};
    int arr1[n];
    int Count1=0;
    int Count0=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            Count1++;
        }
        else{
            Count0++;
        }
    }
    int i=0;
   
    while(Count0!=0){
        arr1[i] = 0;
        i++;
        Count0--;
    }
  
    
    while(Count1!=0){
        
        arr1[i] = 1;
        i++;
        Count1--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    
    return 0;
}