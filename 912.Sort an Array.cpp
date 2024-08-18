class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>>min_heap;
        for(int i=0; i<n; i++)
            min_heap.push(nums[i]);
        int k = 0;
        while(n>0)
        {
            nums[k++]=min_heap.top();
            min_heap.pop();
            n--;
        }
        return nums;
    }
};
