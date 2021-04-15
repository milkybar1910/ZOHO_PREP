#include<stdio.h>
#include<stdlib.h>
    
int findIndex(int arr1[],int arr2[],int n){
    int first = 0,last = n-2;

    if(arr1[first] != arr2[first]){
        return 0;
    }
    if(arr1[n-1]!=arr2[n-2]){
        return n-1;
    }
    int mid;
    int index;

    
    while(first<=last){
        mid=(first+last )/2;
        // printf("%d",mid);
        if(arr1[mid]!=arr2[mid]){
            index = mid;
            last = mid-1;
        }
        else{
            first = mid+1;
        }
    }
    return index;
}

int main()
{
    int n=8;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int arr1[] = {1,2,3,4,6,7,8,9};
    int index = findIndex(arr,arr1,n);
    printf("%d",index);
    return 0;
}


