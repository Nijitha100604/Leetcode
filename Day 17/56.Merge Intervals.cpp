class Solution {
public:

    static bool custom(vector<int>&a, vector<int>&b)
    {
        return a[0]<b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        sort(intervals.begin(),intervals.end(),custom);
        int n = intervals.size();
        for(int i=0; i<n; i++)
        {
            if(result.empty()||intervals[i][0]>result.back()[1])
                result.push_back(intervals[i]);
            else
                result.back()[1] = max(result.back()[1],intervals[i][1]);
        }
        return result;
    }
};
