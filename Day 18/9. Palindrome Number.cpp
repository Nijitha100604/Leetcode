class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long rev = 0;
        int c = x;
        while(c!=0)
        {
            rev = rev*10 + (c%10);
            c /= 10;
        }
        if(x==(int)rev)
            return true;
        return false;
    }
};
