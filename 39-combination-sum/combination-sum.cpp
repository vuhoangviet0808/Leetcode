class Solution {
public:
    void find(vector<vector<int>>& ans, vector<int>& temp, vector<int>& candidates, int target, int idx){
        if(idx == candidates.size()){
            if(target == 0) ans.push_back(temp);
            return;
        }
        if(candidates[idx] <= target){
            temp.push_back(candidates[idx]);
            find(ans, temp, candidates, target-candidates[idx], idx);
            temp.pop_back();
        }
        find(ans, temp, candidates, target, idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        find(ans, temp, candidates, target, 0);
        return ans;
    }
};