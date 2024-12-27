#include <stdio.h>
#include <stdbool.h>

bool isArraySpecial(int* nums, int numsSize) {
    if (numsSize == 1)
        return true;
    for (int i = 0; i < numsSize - 1; ++i) {
        if(nums[i]%2==0 && nums[i+1]%2==0){
            return false;
            break;
        }
        if(nums[i]%2 !=0 && nums[i+1]%2 !=0)
        {
            return false;
            break;
        }
    }
    return true;

}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("%d",isArraySpecial(a,n));
}
