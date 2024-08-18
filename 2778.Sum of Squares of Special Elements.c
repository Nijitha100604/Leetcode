int sumOfSquares(int* nums, int numsSize){
    int sum = 0;
    for(int i=1; i<=numsSize; i++)
    {
        if(numsSize%i == 0){
            sum += pow(nums[i-1], 2);
        }
    }
    return sum;
}
