class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     int l=0;
     int r=0;
     int n=nums.size();
     int count=0;
     int ml=0;
     while (r<n)
     { 
        if (nums[r]==0)
        count ++;
        if (count >k)
        {
            if (nums[l]==0)
            count--;
            l++;
        }
        if (count <=k)
        {
            ml=max(ml,r-l+1);
        }
        r++;
     }   
     return ml;
    }
};