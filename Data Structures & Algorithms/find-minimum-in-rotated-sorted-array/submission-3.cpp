class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size()-1;
        
        while (l < r) {
            int p = l + (r -l) / 2;

            if (nums[p] < nums[r]) {
                r = p;
            } else {
                l = p + 1;
            }

        }
        return nums[l];        
    }
};
