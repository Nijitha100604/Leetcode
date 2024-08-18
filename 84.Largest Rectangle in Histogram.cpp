class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maximum = 0;
        int n = heights.size();
        vector<int> lfs(n,0);
        vector<int> rfs(n,n-1);
        stack<int> s;
        for(int i=0; i<n; i++)
        {
            while(!s.empty() && heights[s.top()]>=heights[i])
                s.pop();
            if(!s.empty())
                lfs[i]=s.top()+1;
            s.push(i);
        }
        while(!s.empty())
            s.pop();
        for(int i=n-1; i>=0; i--)
        {
            while(!s.empty() && heights[s.top()]>=heights[i])
                s.pop();
            if(!s.empty())
                rfs[i] = s.top()-1;
            s.push(i);
        }
        while(!s.empty())
            s.pop();
        for(int i=0; i<n; i++)
            maximum = max(maximum, heights[i]*(rfs[i]-lfs[i]+1));
        return maximum;
    }
};
