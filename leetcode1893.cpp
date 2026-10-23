class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> ans(55,0); // ans(size, in_val)
        int n = ranges.size();
        for(int i=0;i<n;i++){
            int s = ranges[i][0], e = ranges[i][1];
            ans[s]++;
            ans[e+1]--;
        }
        for(int i=1 ;i<=51;i++){
            ans[i]=ans[i-1]+ans[i]; //prefix sum 
        }
        for(int i=left;i<=right;i++){ //checking in the answer array in the given range for 0
            if(ans[i]==0) 
            return false ;
        }
        return true ;
        
    }
};