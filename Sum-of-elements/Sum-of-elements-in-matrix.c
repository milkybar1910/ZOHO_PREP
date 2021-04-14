#include<stdio.h>



int main(){
    
   
    int N,M;
    scanf("%d %d",&N,&M);
    int arr[N][M];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);

    return 0;
}

/*
[
    [1 0 1],
    [-8 9 -2]
    
]
1+0+1-8+9-2 = 1
*/