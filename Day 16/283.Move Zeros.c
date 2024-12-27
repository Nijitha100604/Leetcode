void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void moveZeroes(int* nums, int numsSize) {
    int l = 0;
    int m = 0;
    while(m<=numsSize-1)
    {
        if(nums[m]!=0)
        {
            swap(&nums[l], &nums[m]);
            l++;
            m++;
        }
        else
        m++;
    }
}
