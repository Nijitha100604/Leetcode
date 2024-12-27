class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)
            return false;
        bool alice = false, bob = false;
        int turn = 1, rem = 10;
        while(rem <= n)
        {
            if(turn%2 !=0){
                n = n-rem;
                alice = true;
                bob = false;
                rem--;
                turn++;
            }
            else
            {
                n=n-rem;
                alice = false;
                bob = true;
                rem--;
                turn--;
            }
        }
        return alice;
    }
};
