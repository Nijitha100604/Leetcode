class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> max_heap;
        int n = nums.size();
        for(int i=0; i<n; i++)
            max_heap.push(nums[i]);
        int fm = max_heap.top()-1;
        max_heap.pop();
        int sm = max_heap.top()-1;
        max_heap.pop();
        return fm*sm;
    }
};
