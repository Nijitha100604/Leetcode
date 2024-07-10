#include<stdio.h>

double myPow(double x, signed long int n) {
    if(n>0)
    return pow(x,n);
    else
    return (1/pow(x,-1*n));
}

int main()
{
    signed int x;
    scanf("%d", &x);
    signed int n;
    scanf("%d", &n);
    printf("%.4lf",myPow(x,n));
}
