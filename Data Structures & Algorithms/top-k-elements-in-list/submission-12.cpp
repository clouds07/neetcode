class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencyMap{};
        vector<vector<int>> occurencyMap(nums.size() + 1);
        for (auto num : nums) {
            frequencyMap[num]++;
        }

        for (const auto& [key, val] : frequencyMap) {
            occurencyMap[val].push_back(key);
        }

        vector<int> result;
        result.reserve(k);

        for (int i = occurencyMap.size() - 1; i > 0 ; --i) {
            for (auto num : occurencyMap[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};
