class Solution {
public:

    int minimum(int num)
    {
        int sum = 0;
        while(num!=0)
        {
            sum += num%10;
            num /= 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++)
        {
            nums[i]=minimum(nums[i]);
        }

        int min = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]<min)
                min = nums[i];
        }
        return min;
    }
};
