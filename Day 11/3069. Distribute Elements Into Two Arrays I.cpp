class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        if(nums.size() == 1)
            return nums;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2; i<nums.size(); i++)
        {
            if(arr1.back() >= arr2.back())
                arr1.push_back(nums[i]);
            else
                arr2.push_back(nums[i]);
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        return arr1;
    }
};
