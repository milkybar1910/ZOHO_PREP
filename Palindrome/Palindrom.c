#include<stdio.h>
#include<stdlib.h>
    

void palindrome(int num){
    
    int rev=0;
    int temp = num;
    int digit;
    while(num!=0){
        digit=num%10;
        rev = (rev*10)+digit;
        num/=10;
    }
    
    if (temp==rev)
    {
       printf("YES\n");
       return;
    }
    else{
        printf("NO\n");
        return;
    }
    return;
}
int main()
{
    palindrome(123);
    palindrome(55555);
    return 0;
}