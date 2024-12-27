#include <stdio.h>
#include <stdlib.h>

int climbStairs(int n) {
    if(n==0 || n==1)
        return 1;
    int p2 = 1;
    int p1 = 1;
    int c = 0;
    for(int i=2; i<=n; i++)
    {
        c = p1+p2;
        p2=p1;
        p1 = c;
    }
    return c;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", climbStairs(n));
}
