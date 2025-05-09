class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        for(int i=1;i<n;i++){
            res[i] = INT_MAX;
            for(int j=0;j<i;j++){
                if(nums[j] + j >= i){
                    res[i] = min(res[i], res[j] + 1);
                }
            }
        }
        return res[n-1];
    }
};