#include<stdio.h>

int hammingWeight(int n) {
    int count =0;
    while(n!=0)
    {
        int m=n%2;
        if(m==1)
        count++;
        n = n/2;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", hammingWeight(n));
}
