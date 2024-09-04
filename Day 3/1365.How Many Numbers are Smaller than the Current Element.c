int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int * array = (int*)malloc(sizeof(int)*numsSize);
    int count =0, k=0;
    for(int i=0; i<numsSize; i++)
    {
        for(int j=0; j<numsSize; j++)
        {
            if(nums[i]>nums[j])
                count++;
        }
        array[k++]=count;
        count = 0;
    }
    *returnSize = k;
    return array;
}
