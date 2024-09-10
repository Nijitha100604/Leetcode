class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int length = nums.size();
        int add = 0;
        for(int i=0; i<length; i++)
        {
            ans.push_back(add+nums[i]);
            add += nums[i];
        }
        return ans;

    }
};
