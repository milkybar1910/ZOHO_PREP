#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string1[51];
    char string2[51];
    scanf("%s",string1);
    scanf("%s",string2);

    for(int i=0;i<strlen(string1);i++){
        int count =0;
        for(int j=0;j<strlen(string2);j++){
            if(string2[j] != string1[i]){
                count++;
            }
        }
        if(count==strlen(string2)){
            printf("%c",string1[i]);
        }
    }

    return 0;
}