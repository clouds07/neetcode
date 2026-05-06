class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        for (auto i = 0; i < nums.size(); ++i) {
            auto diff = target - nums[i];
            if (!numMap.contains(diff)) {
                numMap[nums[i]] = i;
            } else {
                return {numMap[diff], i};
            }
        }
        
        return {};
    }
};