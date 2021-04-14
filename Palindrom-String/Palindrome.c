#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void palindromString(char s[]){
    
    int n=strlen(s)-1;
    for(int i=0;i<(n+1)/2;i++){
        if(s[i]!=s[n-i]){
            printf("NO");
            return;
        }
    }
    printf("YES");
    return;
}    


int main()
{
    char s[2000];
    scanf("%s",s);
    palindromString(s);
    return 0;
}