class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(target == nums[0]) return 0;
        int rotation_position = 0;
        int n = nums.size();
    while(rotation_position < n-1 && nums[rotation_position] < nums[rotation_position+1]) rotation_position++;   

        rotation_position = n-1-rotation_position;
    int val = nums[0];
    sort(nums.begin(), nums.end());
    auto it = find(nums.begin(), nums.end(), target);
    if(it == nums.end()) return -1;
    int idx = distance(nums.begin(), it);
    if(target > val) return idx-rotation_position;
    return idx + n-rotation_position;
    }
    

};