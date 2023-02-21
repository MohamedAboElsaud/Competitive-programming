class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int i=1;i<nums.size();i+=2){
            if(nums[i]!=nums[i-1])return nums[i-1];
        }
        return nums.back();
    }
};