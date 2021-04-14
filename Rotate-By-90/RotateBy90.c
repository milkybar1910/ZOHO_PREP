#include<stdio.h>
#include<stdlib.h>
    
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d\n",&arr[i][j]);
        }
    }
    int len = n;
    for(int i=n-1;i>=0;i--,printf("\n")){
        for(int j=0;j<len;j++){
            printf("%d ",arr[j][i]);
        }
    }
    return 0;
}

// 02 12 22
// 01 11 21
// 00 10 20