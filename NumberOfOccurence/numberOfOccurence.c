#include<stdio.h>
#include<stdlib.h>

int highIndex(int n,int x,int arr[]){
    int low = 0;
    int high = n-1;
    long long ans = -1;
    long long mid;
    while(low<=high){
        mid = low+(high-low)/2;
        if(arr[mid]==x){
            ans=mid;
            low = mid+1;
        }
        else if(arr[mid]>x) high = mid-1;
        else low = mid + 1;
    }
    return ans;
}
int lowIndex(int n,int x,int arr[]){
    int low = 0;
    int high = n-1;
    long long ans = -1;
    long long mid;
    while(low<=high){
        mid = low+(high-low)/2;
        if(arr[mid]==x){
            ans=mid;
            high = mid-1;
        }
        else if(arr[mid]>x) high = mid-1;
        else low = mid + 1;
    }
    return ans;
}


void binarySearch(int N,int X,int arr[]){
    long long High = highIndex(N,X,arr);
    long long Low = lowIndex(N,X,arr);

    if(High==-1&&Low == -1){
        printf("0");
        return;}
    printf("%d",High - Low +1);
    return;
    
}

int main()
{
    int N=7,X=2;
    int Arr[]={1,1,2,2,2,2,3};
    binarySearch(N,X,Arr);
    return 0;
}