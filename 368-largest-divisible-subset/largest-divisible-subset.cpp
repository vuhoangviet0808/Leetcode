class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> dp(nums.size(), 1), prev(nums.size(), -1);
        int max_ = 0, n = nums.size();
        for (int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
            if(dp[i] > dp[max_]) max_ = i;
        }
        vector<int> res;
        for(int i=max_;i>=0;i=prev[i]){
            res.push_back(nums[i]);
        }
        return res;
    }
};