class Solution {
public:
    int heightChecker(vector<int>& h1) {
        vector<int> h2;
        for(int i=0; i<h1.size(); i++)
            h2.push_back(h1[i]);
        sort(h1.begin(),h1.end());
        int count = 0;
        for(int i=0; i<h1.size(); i++)
        {
            if(h1[i]!=h2[i])
                count++;
        }
        return count;
    }
};
