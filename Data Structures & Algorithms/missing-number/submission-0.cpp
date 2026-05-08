class Solution {
public:
    int missingNumber(vector<int>& nums) {
        uint64_t sum = nums.size() * (nums.size() + 1) / 2;
        uint64_t sumNums = 0;

        std::cout << sum;

        for (auto num : nums) {
            sumNums += num;
        }
        
        return sum - sumNums;
    }
};
