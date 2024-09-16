class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int flag = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==target)
            {
                flag = 1;
                ans.push_back(i);
                for(int j = nums.size()-1; j >= i; j--)
                {
                    if(nums[j]==target){
                        ans.push_back(j);
                        break;
                    }
                }
                if(flag == 1)
                    break;
            }
        }
        if(flag == 0)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        return ans;
    }
};
