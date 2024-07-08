#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int insert = 0, flag=1;
    int i;
    for(i=0; i<numsSize-1;i++)
    {
        int a=nums[i], b=nums[i+1];
        if((a<target && b>target) || (a<target && b==target)){
          insert = i+1;
          flag = 0;
          break;
        }
    }
    if(flag == 1 && nums[numsSize-1]<target)
    insert = numsSize;
    return insert;
}

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for(int i=0; i<n; i++)
        scanf("%d", &nums[i]);
    int target;
    scanf("%d", &target);
    int result = searchInsert(nums,n,target);
    printf("%d", result);
}
