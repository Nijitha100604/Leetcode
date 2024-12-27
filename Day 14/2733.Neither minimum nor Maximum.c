int findNonMinOrMax(int* nums, int numsSize){
    int min = nums[0], max = nums[0];
    for(int i=1; i<numsSize; i++)
    {
        if(min>nums[i])
            min = nums[i];
        if(max<nums[i])
            max = nums[i];
    }
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] != min && nums[i] != max)
            return nums[i];
    }
    return -1;
}
