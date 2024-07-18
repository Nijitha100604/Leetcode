#include <stdio.h>

int countTestedDevices(int* batteryPercentages, int batteryPercentagesSize) {
    int count =0;
    for(int i=0; i<batteryPercentagesSize; i++)
    {
        if(batteryPercentages[i]>0)
        {
            count++;
            for(int j=i+1; j<batteryPercentagesSize; j++)
            {
                if(batteryPercentages[j]>0)
                    batteryPercentages[j]=batteryPercentages[j]-1;
            }
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
    printf("%d",countTestedDevices(a,n));
}
