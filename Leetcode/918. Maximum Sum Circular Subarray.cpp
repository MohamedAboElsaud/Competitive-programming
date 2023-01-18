class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int res = 0, mxs = -1e5, mx = 0, mns = 1e5, mn = 0;
        for (int i : nums) {
            mx = max(i, mx + i);
            mxs = max(mxs, mx);
            mn = min(i, mn + i);
            mns = min(mn, mns);
            res += i;
        }
        return mxs > 0 ? max(mxs, res - mns) : mxs;
    } 
    
};