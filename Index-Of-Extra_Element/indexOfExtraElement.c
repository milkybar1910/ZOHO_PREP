#include<stdio.h>
#include<stdlib.h>
    

int findIndex(int arr1[],int arr2[],int n){
    int index;
    int left = 0 ,right =n-2;
    while(left<=right){
        int mid = (left+right)/2;
        if(arr1[mid] == arr2[mid])
            left = mid+1;
        else{
            index = mid;
            right = mid-1;
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