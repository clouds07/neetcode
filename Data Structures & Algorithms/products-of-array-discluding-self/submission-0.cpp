class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        output.reserve(nums.size());

        for (auto i = 0; i < nums.size(); ++i) {
            int prod = 1;
            for (auto j = 0; j < nums.size(); ++j) {
                if (j != i) {
                    prod *= nums[j];
                }
            }
            output.push_back(prod);
        }
        return output;
    }
};
