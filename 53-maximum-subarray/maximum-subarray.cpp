class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), result;

        vector<int> res(n);
        res[0] = nums[0];
        result = res[0];
        for(int i=1;i<n;i++){
            res[i] = max(nums[i], res[i-1] + nums[i] );
            result = max(result, res[i]);
        }
        return result;
    }
};