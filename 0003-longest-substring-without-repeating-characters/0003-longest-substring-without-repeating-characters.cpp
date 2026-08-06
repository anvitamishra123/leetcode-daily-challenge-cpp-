class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>has(256,-1);
        int l=0;
         int r=0;
          int ml=0;
          int n=s.length();
          while (r<n)
          {
            if (has[s[r]]!=-1)
            {
                if (has[s[r]]>=l)
                {
                    l=has[s[r]]+1;
                }
            }
            ml=max(ml,r-l+1);
            has[s[r]]=r;
            r++;
          }
          return ml;
    }
};