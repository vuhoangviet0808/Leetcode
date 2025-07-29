class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> B(30, 0), res(n, 1);
        for(int i = n - 1; i >= 0; i--){
            for(int j = 0; j< 30;j++){
                if(nums[i] & (1 << j)){
                    B[j] = i;
                }
                res[i] = max(res[i], B[j] - i + 1);
            }
        }
        return res;
    }
};