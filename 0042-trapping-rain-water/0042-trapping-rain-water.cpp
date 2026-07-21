class Solution {
public:
    int trap(vector<int>& height) {
       int l=0;
       int r=height.size()-1;
       int left=0;
       int right=0;
       int ans=0;
       while (l<=r)
       {
        if (height[l]<height[r])
        {
            left=max (left,height[l]);
            ans=ans+(left-height[l]);
            l++;
        }
        else 
        {
            right=max(right,height[r]);
            ans=ans+(right-height[r]);
            r--;
        }
       } 
       return ans ;
    }
};