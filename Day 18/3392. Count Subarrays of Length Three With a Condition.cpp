class Solution {
public:

    bool check(vector<int>& nums, int start,int mid, int end)
    {
        if((nums[start]+nums[end]) == (float)nums[mid]/2)
            return true;
        return false;
    }

    int countSubarrays(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size()-2; i++)
        {
            if(check(nums, i, i+1, i+2))
                count++;
        }
        return count;
    }
};
