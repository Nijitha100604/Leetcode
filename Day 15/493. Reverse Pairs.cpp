class Solution {
public:

    int mergesort(vector<int>& nums, int l, int h, int m)
    {

        int j= m+1;
        int totalcount =0;
        for(int i=l; i<=m; i++)
        {
            while(j<=h && nums[i]>(long)2*nums[j])
            j++;
            totalcount += j-(m+1);
        }

        vector<int>temp;
        int left = l;
        int right = m+1;
        while(left<=m && right <=h)
        {
            if(nums[left]<=nums[right])
            temp.push_back(nums[left++]);
            else
            temp.push_back(nums[right++]);
        }
        while(left<=m)
            temp.push_back(nums[left++]);
        while(right<=h)
            temp.push_back(nums[right++]);

        for(int i=l; i<=h; i++)
            nums[i]=temp[i-l];


        return totalcount;
    }

    int merge(vector<int>& nums, int l, int h)
    {
        if(l<h)
        {
            int count = 0;
            int m = (l+h)/2;
            count += merge(nums, l, m);
            count += merge(nums, m+1, h);
            count += mergesort(nums, l, h, m);
            return count;
        }
        return 0;

    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        return merge(nums, 0 , n-1);
    }
};
