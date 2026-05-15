class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            int pivot = l + (r - l)/2;
    
            if (nums[pivot] < target) {
                l = pivot + 1;
            } else if (nums[pivot] > target){
                r = pivot - 1;
            } else {
                return pivot;
            }
        }
        return -1;
    }
};
