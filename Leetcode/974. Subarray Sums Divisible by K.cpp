class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
         int f[40005]={0},res = 0, x = 0;
        f[0]++;
        for(int i = 0; i<nums.size(); i++) {
            x = (x + nums[i]%k + k)%k;
            res += f[x];
            f[x]++;
        }
        return res;
    }
};