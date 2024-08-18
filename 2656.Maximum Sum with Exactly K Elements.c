int maximizeSum(int* nums, int numsSize, int k){
    int max = 0;
    for(int i=1; i<numsSize; i++)
    {
        if(nums[max]<=nums[i])
            max=i;

    }
    int sum = 0;
    while(k>0)
    {
        sum += nums[max];
        nums[max]++;
        k--;
    }
    return sum;
}
