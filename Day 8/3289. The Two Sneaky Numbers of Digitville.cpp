class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
      unordered_map<int,int> m;
      vector<int>ans;
      for(int i=0; i<nums.size(); i++)
      {
        if(m.count(nums[i]))
            m[nums[i]]++;
        else
            m[nums[i]] = 1;
      }

      for(auto& e:m)
      {
        if(e.second==2)
            ans.push_back(e.first);
      }
       return ans;
    }

};
