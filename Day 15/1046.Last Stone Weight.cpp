class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap;
        int n = stones.size();
        for(int i=0; i<n; i++)
            max_heap.push(stones[i]);
        int fm=0, sm =0;
        while(n>1)
        {
            fm = max_heap.top();
            max_heap.pop();
            sm = max_heap.top();
            max_heap.pop();
            n -= 2;
            if(fm-sm > 0)
            {
                max_heap.push(fm-sm);
                n += 1;
            }
        }
        if(!max_heap.empty())
            return max_heap.top();
        else
        return 0;
    }
};
