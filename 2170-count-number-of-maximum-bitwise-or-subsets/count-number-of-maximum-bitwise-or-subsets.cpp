class Solution {
    int backtrack(vector<int>& nums, int max_or, int index, int current_or){
        if (index == nums.size()){
            return current_or == max_or ? 1:0;
        }
        if(current_or == max_or){
            return 1 << (nums.size() - index);
        }
        return backtrack(nums, max_or, index + 1, current_or | nums[index]) +
               backtrack(nums, max_or, index + 1, current_or);
    }
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int max_or = 0;
        for (int num:nums){
            max_or = max_or | num;
        }
        return backtrack(nums, max_or, 0, 0);
    }
};