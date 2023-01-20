class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>res;
         for(int i=0;i<(1<<nums.size());i++){
             vector<int>v;
             for(int j=0;j<nums.size();j++){
                 if(i&(1<<j))v.push_back(nums[j]);
             }
             if(1<v.size()){
                 if(is_sorted(v.begin(),v.end()))res.insert(v);
             }
         }
         return vector(res.begin(),res.end());
    }
};