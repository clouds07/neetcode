class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap;
        std::vector<int> result;
        result.reserve(2);
        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if (!numMap.contains(diff)) {
                numMap.insert({nums[i], i});
            } else {
                result.push_back(numMap[diff]);
                result.push_back(i);
                return result;
            }
        }
        
        return {};
    }
};