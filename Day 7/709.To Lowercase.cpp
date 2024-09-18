class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0, j=0;
        for(int k=0; k<moves.size(); k++)
        {
            if(moves[k]=='U') i++;
            else if(moves[k]=='D') i--;
            else if(moves[k]=='R') j++;
            else if(moves[k]=='L') j--;
        }

        if(i==0 && j==0)
            return true;
        return false;
    }
};
