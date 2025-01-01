class Solution {
public:
    string reverseOnlyLetters(string s) {
       int l = 0;
       int r = s.size()-1;
       while(l<r)
       {
            if(isalpha(s[l]) && isalpha(s[r]))
            {
                char temp = s[l];
                s[l]=s[r];
                s[r] = temp;
                l++;
                r--;
            }
            while(! isalpha(s[l]) && l<r)
                l++;
            while(! isalpha(s[r]) && l<r)
                r--;
       }
       return s;
    }
};
