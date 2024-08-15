#include <stdio.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize) {
    int maxprofit =0, minprice = prices[0];
    for(int i=0; i<pricesSize; i++)
    {
        if(prices[i]<minprice)
        minprice = prices[i];
        if(prices[i]-minprice > maxprofit)
        maxprofit = prices[i]-minprice;
    }
    return maxprofit;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("%d",maxProfit(arr,n));
}
