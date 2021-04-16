#include<stdio.h>
#include<stdlib.h>
    
int main()
{
    int N=3;
    int arr[N] = {1,2};
    
    int frequencyArray[N];

    for(int i=1;i<N+1;i++){
        frequencyArray[i] = 0;
    }

    for(int i=0;i<N;i++){
        frequencyArray[arr[i]]+=1;
    }
    for(int i=1;i<N+1;i++){
        if(frequencyArray[i]>=1){
            printf("%d",i);
        }
    }
    return 0;
}