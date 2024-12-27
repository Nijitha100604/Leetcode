class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
      unordered_map<int,int> m;
      for(int i=0; i<nums.size(); i++)
      {
        m[nums[i]]++;
      }

      int max = -1;
      for(auto& e:m)
      {
        if(e.second > max)
            max = e.second;
      }

      int count = 0;
      for(auto& e:m)
      {
        if(e.second == max)
            count += e.second;
      }
      return count;
    }
};
