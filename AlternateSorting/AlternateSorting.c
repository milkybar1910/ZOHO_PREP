// Input: N = 7, arr[] = {7, 1, 2, 3, 4, 
//                                 5, 6}
// Output: 7 1 6 2 5 3 4
// Explanation:The first element is first 
// maximum and second element is first 
// minimum and so on.

#include<stdio.h>
#include<stdlib.h>

int cmpFunc(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}
    
int main()
{
    int n=7;
    int arr[n] =  {7, 1, 2, 3, 4, 5, 6};
    qsort(arr,n,sizeof(int),cmpFunc);
    // 1 2 3 4 5 6 7 89

    for(int first=0,last=n-1;first<=last;last--,first++){
        if(first == last){
            printf("%d",arr[last]);
            break;
        }
        printf("%d %d ",arr[last],arr[first]);
    }
    
    return 0;
}