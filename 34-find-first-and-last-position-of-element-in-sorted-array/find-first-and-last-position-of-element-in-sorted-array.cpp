class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1, -1};
        int left = 0, right = nums.size()-1;
        int pos = -1;
        while(left <= right){
            int mid = (left+right)/2;
            if(nums[mid] == target){
                pos = mid;
                break;
            } else if(nums[mid] < target) {
                left = mid +1;
            } else{
                right = mid-1;
            }
        }
        if(pos == -1) return {-1, -1};
        int pos2 = pos, pos3= pos;
        while( pos2 < nums.size() && nums[pos2] == nums[pos]){
            pos2++;
        }
        while(pos3 >= 0 && nums[pos3] == nums[pos]){
            pos3--;
        }
        pos2--;
        pos3++;
        return {pos3, pos2};
    }
};