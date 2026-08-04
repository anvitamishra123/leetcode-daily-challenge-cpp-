class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n =heights.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>s;
        //left dip
        for(int i=0;i<n;i++){
            while(s.size()>0 &&heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.size()==0){
                left[i]=-1;
            }
            else{
                left[i]=s.top();
            }
            s.push(i);
        }
        while(s.size()>0){
            s.pop();
        }
        //right dip
        for(int i =n-1;i>=0;i--){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(s.size()==0){
                right[i]=n;
            }
            else{
                right[i]=s.top();
            }
            s.push(i);
        }
        int marea=0;
        for(int i=0;i<n;i++){
            int area=(right[i]-left[i]-1)*heights[i];
         marea=max(area,marea);
        }
        return marea;

    }
};