class Solution {
public:

    int maximum(vector<int>& nums)
    {
        int max = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(max<nums[i])
                max = nums[i];
        }
        return max;
    }

    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        return maximum(nums2)-maximum(nums1);
    }
};
