class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> arr;
        int prev = -1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                if(prev != -1 && i-prev-1 < k)
                    return false;
                prev = i;
            }
        }
        return true;

    }
};
