class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = INT_MAX/2, n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum = nums[i] + nums[j];
                for(int k=j+1;k<n;k++){
                    int sum1 = sum + nums[k];
                    if(abs(sum1-target) < abs(res-target)){
                        res = sum1;
                    }
                }
            }
        }
        return res;
    }
};