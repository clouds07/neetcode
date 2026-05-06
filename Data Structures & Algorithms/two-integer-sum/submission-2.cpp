class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if (!numMap.contains(diff)) {
                numMap.insert({nums[i], i});
            } else {
                return std::vector<int>({numMap[diff], i});
            }
        }
        
        return {};
    }
};