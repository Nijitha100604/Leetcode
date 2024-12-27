class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        priority_queue<int, vector<int>, greater<int>> min_heap;
        for(int i=0; i<n; i++)
            min_heap.push(nums[i]);
        int k = 0;
        while(n>0)
        {
            int alice = min_heap.top();
            min_heap.pop();
            int bob = min_heap.top();
            min_heap.pop();
            n -= 2;
            ans[k++]=bob;
            ans[k++]=alice;
        }
        return ans;
    }
};
