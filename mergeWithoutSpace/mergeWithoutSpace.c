// Input: 
// n = 4, arr1[] = [1 3 5 7] 
// m = 5, arr2[] = [0 2 6 8 9]
// Output: 
// arr1[] = [0 1 2 3]
// arr2[] = [5 6 7 8 9]
// Explanation:
// After merging the two 
// non-decreasing arrays, we get, 
// 0 1 2 3 5 6 7 8 9.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmpfunc(const void *a,const void *b){
    return (*(int*)a - *(int*)b);   
}
    
int main()
{
    int n=4,m=5;
    
    scanf("%d %d",&n,&m);
    int arr1[n+m],arr2[m];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }


    for(int i=n,count=0;count!=m;i++,count++){
        arr1[i] = arr2[count];
    }
    qsort(arr1,n+m,sizeof(int),cmpfunc);

    for(int i=n,count=0;count!=m;i++,count++){
        arr2[count] = arr1[i];
    }

    for(int i=0;i<(n);i++){
        printf("%d ->",arr1[i]);
    }
    for(int i=0;i<(m);i++){
        printf("%d ->",arr2[i]);
    }
    
    
    return 0;
}