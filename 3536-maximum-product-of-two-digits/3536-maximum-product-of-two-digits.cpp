class Solution {
public:
    int maxProduct(int n) {
        vector<int>digit(log(n)+1);
        while (n>0)
        {
            int rem=n%10;
            digit.push_back(rem);
            n=n/10;
        }
        sort(digit.begin(),digit.end());
        return (digit[digit.size()-1]*digit[digit.size()-2]);
    }
};