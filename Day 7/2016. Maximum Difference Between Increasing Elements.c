int maximumDifference(int* nums, int numsSize) {
    int min = nums[0];
    int maxdiff = -1;
    for(int i=0; i<numsSize; i++)
    {
        if(min>nums[i])
            min = nums[i];
        if(nums[i]-min > maxdiff && min != nums[i])
            maxdiff = nums[i]-min ;
    }
    return maxdiff;
}
