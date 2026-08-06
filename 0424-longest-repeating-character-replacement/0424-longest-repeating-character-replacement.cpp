class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int >hash(26);
        int l=0;
        int r=0;
         int mf=0;
         int ml=0;
         int n =s.size();
         while (r<n)
         {
          hash[s[r]-'A']++;
          mf=max(mf,hash[s[r]-'A']);
          while ((r-l+1)-mf>k)
          {
            hash[s[l]-'A']--;
            mf=0;
            for (int i=0;i<26;i++)
            {
                mf=max(mf,hash[i]);
            }
            l++;
          }
          ml=max(ml,r-l+1);
          r++;
         }
         return ml;
    }
};