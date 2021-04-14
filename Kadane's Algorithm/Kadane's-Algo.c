
// Input:
// N = 5
// arr[] = {1,2,3,-2,5}
// Output:
// 90
// Explanation:
// Max subarray sum is 9
// of elements (1, 2, 3, -2, 5) which 
// is a contiguous subarray.
/*
    1  1
    12 3
    123 6
    123-2 4
    123-25  9
    2 
    23
    23-2
    23-25
    3
    3-2
    3-25
    -25
    5
 */

/*
    1.sort
    2.last to first (last == -1 or -ve return)
    3.if -ve ignore
    4
*/


#include<stdio.h>
#include<stdlib.h>
    
int main()
{
    int N=14;
    int arr[N]={74 ,-72, 94, -53, -59, -3, -66, 36, -13, 22, 73, 15, -52, 75};
    int sum=0;
    int max = 0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        if(max<sum){
            max=sum;
        }
    }

    
    

    //TIME COMPLEXITY : O(N)
    printf("%d",max);
    return 0;
}