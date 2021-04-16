#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool isVowel(char a){
    if(a =='a' || a=='e' || a=='i'|| a=='o' ||a=='u'){
        return true;
    }
    return false;
}


int main()
{
    char s[1000] = "practice";
    char s1[strlen(s)];
    int count =-1;
    for(int i=0;i<strlen(s);i++){
        if(isVowel(s[i])){
            s1[++count] = s[i];
        }
    }

    for(int i=0;i<strlen(s);i++){
        if(isVowel(s[i])){
            s[i] = s1[count--];
        }
    }
    printf("%s",s);
    return 0;
}