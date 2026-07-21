class Solution {
public:
    int trap(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int left=0;
        int right=0;
        int ans=0;
        while (l<r)
        {
            if( h[l]<h[r])
            {
           left=max(left,h[l]);
           ans=ans+(left-h[l]);
           l++;
            }
            else 
            {
 right=max(right,h[r]);
           ans=ans+(right-h[r]);
           r--;
            }
        }
   return ans;
    }
};