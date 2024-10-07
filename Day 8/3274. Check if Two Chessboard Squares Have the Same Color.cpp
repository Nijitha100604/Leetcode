class Solution {
public:

    string first(char a, char b)
    {
        int d1 = (a -'a')+1;
        int d2 = ((int)b - 47)+1;
        if(d1%2!=0 && d2%2!=0)
            return "black";
        else if(d1%2==0 && d2%2==0)
            return "black";
        return "white";
    }

    bool checkTwoChessboards(string c1, string c2) {
        return first(c1[0],c1[1])==first(c2[0],c2[1]);
    }
};
