class Solution {
public:

    void backtrack(int start,vector<int>&combination,vector<vector<int>> &result,vector<int> &candidates, int target)
    {
        if(target<0)
            return;
        if(target == 0){
            result.push_back(combination);
            return;
        }
        for(int i=start; i<candidates.size(); i++)
        {
            if(i>start && candidates[i] == candidates[i-1])
                continue;
            combination.push_back(candidates[i]);
            backtrack(i+1,combination,result,candidates,target-candidates[i]);
            combination.pop_back();

        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>combination;
        vector<vector<int>>result;
        sort(candidates.begin(),candidates.end());
        backtrack(0,combination,result,candidates,target);
        return result;
    }
};
