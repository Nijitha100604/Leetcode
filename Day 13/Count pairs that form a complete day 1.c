#include <stdio.h>

int countCompleteDayPairs(int* hours, int hoursSize) {
    int count =0;
    for(int i=0; i<hoursSize; i++)
    {
        for(int j=i+1; j<hoursSize; j++)
        {
            if((hours[i]+hours[j])%24 == 0)
            count++;
        }
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
    printf("%d", countCompleteDayPairs(a,n));
}
