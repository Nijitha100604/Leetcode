#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool search(int* nums, int numsSize, int target) {
    int flag =0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]==target)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    return true;
    else
    return false;
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
    if(search(a,n,t))
        printf("Yes");
    else
        printf("No");
}
