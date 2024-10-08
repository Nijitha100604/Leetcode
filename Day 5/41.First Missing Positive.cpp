class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>0 && nums[i]==count)
                count++;
            else if(nums[i]>count)
                return count;
        }
        return count;
    }
};
