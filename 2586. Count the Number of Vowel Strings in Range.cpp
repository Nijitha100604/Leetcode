class Solution {
public:
    bool isvowel(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return true;
        return false;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(int i=left; i<=right; i++)
        {
            int size = words[i].size()-1;
            if(isvowel(words[i][0])&&isvowel(words[i][size]))
                count++;
        }
        return count;
    }
};
