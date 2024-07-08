#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(long int x) {
    long int rev =0;
    long int org = x;
    if(x<0)
    return 0;
    else{
    while(x!=0)
    {
        long int d=x%10;
        rev = rev*10+d;
        x=x/10;
    }
    if(org==rev)
    return 1;
    else
    return 0;
    }
}

int main()
{
    long int n;
    scanf("%ld",&n);
    int result = isPalindrome(n);
    if(result == 0)
    printf("False");
    else
    printf("True");
}
