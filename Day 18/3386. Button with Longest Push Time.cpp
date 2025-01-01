class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int max = events[0][1], index = events[0][0];
        for(int i=1; i<events.size(); i++)
        {
            int time = events[i][1] - events[i-1][1];
            if(max == time)
            {
                if(events[i][0]<index)
                    index = events[i][0];
            }
            else if(max<=time){
                max = time;
                index = events[i][0];
            }

        }
        return index;

    }
};
