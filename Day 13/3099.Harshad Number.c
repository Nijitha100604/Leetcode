#include <stdio.h>
#include <stdlib.h>

int sumOfTheDigitsOfHarshadNumber(int x) {
    int num = x, sum=0;
    while(num!=0)
    {
        int d=num%10;
        sum += d;
        num = num/10;
    }
    if(x%sum==0)
    return sum;
    else
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", sumOfTheDigitsOfHarshadNumber(n));
}
