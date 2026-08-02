class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string start=strs[0];
        string last=strs[strs.size()-1];
        string ans ;
        for (int i=0;i<start.length();i++)
        {
            if (start[i]!=last[i])
            break;
            ans+=start[i];
        }
        return ans ;
    }
};