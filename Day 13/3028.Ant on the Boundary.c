#include <stdio.h>
#include <stdlib.h>

int returnToBoundaryCount(int* nums, int numsSize) {
    int add = 0, count=0;
    for(int i=0; i<numsSize; i++)
    {
        add = add+nums[i];
        if(add==0)
        count++;
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("%d",returnToBoundaryCount(a,n));
}
