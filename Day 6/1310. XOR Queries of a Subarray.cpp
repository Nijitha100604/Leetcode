class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int num = 0;
        for(int i=0; i<queries.size(); i++)
        {
            for(int j=queries[i][0]; j<=queries[i][1]; j++){
                num = num ^ arr[j];
            }
            ans.push_back(num);
            num = 0;
        }
        return ans;
    }
};
