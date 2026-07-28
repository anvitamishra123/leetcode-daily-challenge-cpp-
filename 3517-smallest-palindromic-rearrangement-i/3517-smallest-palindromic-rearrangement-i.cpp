class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
    int mid =s.size()/2;
    sort(s.begin(),s.begin()+mid);
    for (int i=0;i<mid;i++)
    {
        s[n-i-1]=s[i];
    }
    return s;
    }
};