class Solution {
public:
    int alternateDigitSum(int n) {
        int d = floor(log10(n));
        int sum = 0, count = 0;
        while(n!=0)
        {
            if(count%2==0)
            {
                int de = (pow(10,d));
                sum += n/de;
                count++;
                n = n%de;
                d--;
            }
            else
            {
                int de = (pow(10,d));
                sum -= n/de;
                count++;
                n = n%de;
                d--;
            }
        }
        return sum;
    }
};
