class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> S;
        S.push(-1);
        int count = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(')
                S.push(i);
            else
            {
                S.pop();
                if(S.empty())
                    S.push(i);
                else
                {
                    if(i-S.top()>count)
                        count = i-S.top();
                }
            }
        }
        return count;
    }
};
