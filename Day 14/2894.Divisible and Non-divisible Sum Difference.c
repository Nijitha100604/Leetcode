#include <stdio.h>
#include <stdlib.h>

int differenceOfSums(int n, int m) {
    int num1=0, num2=0;
    for(int i=1; i<=n; i++)
    {
        if(i%m != 0)
        num1 = num1+i;
        else
        num2 = num2+i;
    }
    return num1 - num2;
}

int main()
{
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
    printf("%d", differenceOfSums(n,m));
}
