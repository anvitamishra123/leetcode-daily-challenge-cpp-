class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        vector<int>ans(nums.size(),0);
         int right=nums.size()-1;
         int index=nums.size()-1;
         while (left<=right)
         {


            if (abs(nums[left])<abs(nums[right]))
            {
               ans[index]=nums[right]*nums[right];
                index--;
                right--;
            }
            else 
            {
                ans [index]=nums[left]*nums[left];
                left++;
                index--;
            }
         }
         return ans ;
    }
};