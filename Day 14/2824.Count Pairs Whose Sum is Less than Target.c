#include <stdio.h>
#include <stdlib.h>

int countPairs(int* nums, int numsSize, int target){
    int count =0;
    for(int i=0; i<numsSize-1; i++)
    {
        for(int j=i+1; j<numsSize; j++)
        {
            if(nums[i]+nums[j]<target)
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
    int target;
    scanf("%d", &target);
    printf("%d",countPairs(a,n,target));
}
