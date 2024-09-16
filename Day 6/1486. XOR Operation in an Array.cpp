class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> ans;
        int count = 0;
        int num = 0;
        while(count<n){
            int d = 2*count + start;
            num = num ^ d;
            count++;
        }
        return num;
    }
};
