class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;

        if (nums.size() == 1) {
            vector<int> l;
            l.push_back(nums[0]);
            res.push_back(l);
            return res;
        }
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            vector<int> subNums;
            for(int j=0;j<nums.size();j++){
                if(j != i){
                    subNums.push_back(nums[j]);
                }
            }

            vector<vector<int>> perms = permute(subNums);
            for(vector<int> p : perms){
                p.insert(p.begin(), n);
                res.push_back(p);
            }
        }
        return res;
    }
};