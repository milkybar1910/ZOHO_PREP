
/*

Input:
M = 3 and N = 3
Output: 6
Explanation:
Let the given input 3*3 matrix is filled 
as such:
A B C
D E F
G H I
The possible paths which exists to reach 
'I' from 'A' following above conditions 
are as follows:ABCFI, ABEHI, ADGHI, ADEFI, 
ADEHI, ABEFI

*/


#include<stdio.h>
int numberOfPaths(int,int);

int main(){
    int M,N;
    scanf("%d %d",&M,&N);
    
    printf("%d",numberOfPaths(M,N));

    return 0;
}
int numberOfPaths(int M,int N){
    if(N==1 || M==1){
        return 1;
    }
    return numberOfPaths(M-1,N)+numberOfPaths(M,N-1);
}