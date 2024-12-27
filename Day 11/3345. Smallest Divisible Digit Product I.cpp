class Solution {
public:
    int smallestNumber(int n, int t) {
        int flag = 0;
        while(flag!=1)
        {
            int product = 1;
            int c = n;
            while(c!=0)
            {
                product = product * (c%10);
                c /= 10;
            }
            if(product % t == 0){
                flag = 1;
            }
            else
            {
                n++;
                product = 1;
            }
        }
        return n;
    }
};
