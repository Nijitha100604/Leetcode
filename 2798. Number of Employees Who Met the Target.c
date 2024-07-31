#include<stdio.h>
#include<stdlib.h>

int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){
    int count =0;
    for(int i=0; i<hoursSize; i++)
    {
        if(hours[i]>=target)
        count++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    int t;
    scanf("%d", &t);
    printf("%d",numberOfEmployeesWhoMetTarget(a,n,t));
}
