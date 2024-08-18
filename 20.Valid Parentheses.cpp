class Solution {
public:
    bool isValid(string s) {
         stack<int> x;
        for(auto ch:s)
        {
            if(ch == '(' || ch == '{' || ch == '[')
                x.push(ch);
            else
            {
                if(x.empty())
                    return false;
                if(ch==')')
                    if(x.top() == '(')
                        x.pop();
                    else
                        return false;

                if(ch=='}')
                    if(x.top() == '{')
                        x.pop();
                    else
                        return false;

                if(ch==']')
                    if(x.top() == '[')
                        x.pop();
                    else
                        return false;
            }
        }
        if(x.empty())
            return true;
        return false;
    }
};
