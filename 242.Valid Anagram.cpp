class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return 0;
        unordered_map<char,int> m;
        int n = s.length();
        for(int i=0; i<n; i++)
        {
            m[s[i]] += 1;
            m[t[i]] -= 1;
        }

        for(auto e:m)
        {
            if(e.second > 0)
                return false;
        }
        return true;
    }
};
