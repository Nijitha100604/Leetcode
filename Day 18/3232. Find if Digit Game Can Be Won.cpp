class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int oneDigit =0, twoDigit = 0;
        for(int num:nums)
        {
            if(num>=0 && num<=9)
                oneDigit += num;
            else
                twoDigit += num;
        }
        if(oneDigit == twoDigit)
            return false;
        return true;
    }
};
