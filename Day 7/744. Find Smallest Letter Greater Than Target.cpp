class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char min = 123;
        for(int i=0;i<letters.size(); i++)
        {
            if(letters[i]>target && letters[i]<min)
                min = letters[i];
        }
        if(min == 123)
            return letters[0];
        return min;
    }
};
