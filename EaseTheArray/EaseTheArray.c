/*

Given an array of integers of size, N. 
Assume ‘0’ as the invalid number and all others as a valid number.
Write a program that modifies the array in such a way that if the next number is a valid number 
and is the same as the current number, double the current number value 
and replace the next number with 0.
After the modification, rearrange the array such that all 0’s are shifted to the end 
and the sequence of the valid number or new doubled number is maintained as in the original array.

Example 1:

â€‹Input : arr[ ] = {2, 2, 0, 4, 0, 8}
Output : 4 4 8 0 0 0
Explanation:
At index 0 and 1 both the elements are same.
So, we can change the element at index 0 to 
4 and element at index 1 is 0 then we shift 
all the values to the end of the array. 
So, array will become [4, 4, 8, 0, 0, 0].

Example 2:

Input : arr[ ] = {0, 2, 2, 2, 0, 6, 6, 0, 0, 8}
Output :  4 2 12 8 0 0 0 0 0 0


Your Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function modifyAndRearrangeArr() that takes an array (arr) and its size (n), and modifies it in-place.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 105

*/

#include<stdio.h>
#include<stdlib.h>
    
int main()
{
    int N = 10;
    // scanf("%d",&N);
    int arr1[N];

    int arr[N]= {0, 2, 2, 2, 0, 6, 6, 0, 0, 8};
    // for(int i=0;i<N;i++)
    //     scanf("%d\n",arr[i]);

    for(int i=0;i<N;i++){
        if(arr[i]==arr[i+1]){
            arr[i] +=arr[i];
            arr[i+1] =0;
            i++;
        }
    }
   
    int count =-1;
    for(int i=0;i<N;i++){
        if(arr[i]!=0){
            arr1[++count] = arr[i];
        }
    }

    for(int i=count+1;i<N;i++){

        arr1[i] =0;
    }
     for(int i=0;i<N;i++){
        printf("%d ",arr1[i]);
    }
    
    return 0;
}