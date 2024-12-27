#include <stdio.h>
#include <stdlib.h>

int mySqrt(int x) {
    int d=sqrt(x);
    return d;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d", mySqrt(n));
}
