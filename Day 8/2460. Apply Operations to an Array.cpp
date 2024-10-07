class Solution {
public:

    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
            }
        }

        int n = nums.size();
        int l=0, m=0;
        while(m<n)
        {
            if(nums[m]!=0)
            {
                swap(nums[l], nums[m]);
                l++;
                m++;
            }
            else
                m++;
        }
        return nums;
    }
};
