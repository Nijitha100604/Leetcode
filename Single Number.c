#include <stdio.h>
#include <stdlib.h>

int singleNumber(int* nums, int numsSize) {
    if(numsSize==1)
    return nums[0];
    int count = 0,d;
    for(int i=0; i<numsSize; i++)
    {
        count=1;
        for(int j=0; j<numsSize; j++)
        {
            if(j!=i){
            if(nums[i]==nums[j])
            count++;
            }
        }
        if(count==1)
        {
           d=nums[i];
           break;
        }
    }
    return d;

}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("%d", singleNumber(a,n));
}
