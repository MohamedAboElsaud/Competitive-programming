class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long res = 0, x = 0;
        for (int &i : nums) {
            if (i == 0) {
                res += ++x;
            } else {
                x = 0;
            }
        }
        return res;
    }
};