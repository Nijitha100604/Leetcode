#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
   int *a;
   int size = 10;
   a = (int *)malloc(size * sizeof(int));
   *returnSize = 2;
    for(int i=0; i<numsSize; i++)
    {
        for(int j=i+1; j<numsSize; j++)
        {
            if(nums[i]+nums[j]==target)
            {
                a[0]=i;
                a[1]=j;
                break;
            }
        }
    }
    return a;
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
    int returnSize;
    int *result = twoSum(a,n,t,&returnSize);
    printf("%d %d", result[0], result[1]);
}
