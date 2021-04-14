#include<stdio.h>
#include<stdlib.h>
    
int main()
{
    int n=4,k=3;
    int arr[n] = {5,8,10,13};
  
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
    if(arr[i]%k==0) {
    sum = sum + arr[i]/k; 
    }
    else
    {
    sum = sum + (arr[i]/k)+1;
    }

    }
        printf("%d",sum);
    return 0;
}