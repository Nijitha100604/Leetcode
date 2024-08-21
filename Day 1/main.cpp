class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++)
            m[nums[i]]++;
        for(auto e:m)
        {
            if(e.second==1)
                sum += e.first;
        }
        return sum;
    }
};
