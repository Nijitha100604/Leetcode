class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i=0; i<n; i++)
            m[nums[i]]++;
        for(auto e: m)
        {
            if(e.second == 1)
                ans.push_back(e.first);
        }
        return ans;
    }
};
