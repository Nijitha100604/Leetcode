class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i=0; i<n; i++)
            m[nums[i]]++;
        for(auto element: m)
        {
            if(element.second>1)
                return element.first;
        }
        return 0;
    }
};
