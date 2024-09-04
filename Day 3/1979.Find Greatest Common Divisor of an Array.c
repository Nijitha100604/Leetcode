int findGCD(int* nums, int numsSize) {
    int min = nums[0], max = nums[0];
    for(int i=1; i<numsSize; i++)
    {
        if(min>nums[i])
            min = nums[i];
        if(max<nums[i])
            max = nums[i];
    }

    int gcd = 0;
    for(int i=1; i<=min; i++)
    {
        if(min%i==0 && max%i==0)
            gcd = i;
    }
    return gcd;
}
