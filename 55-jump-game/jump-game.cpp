class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> p = vector<int>(n, 0);
        p[0] = 1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(p[j] != 0 && j + nums[j] >= i){
                    p[i] = 1;
                    break;
                }
            }
        }
        if (p[n-1] == 0) return false;
        return true;
    }
};