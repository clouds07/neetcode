class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> frequencyMap{};
        for (auto num : nums) {
            if (frequencyMap.contains(num)) {
                frequencyMap[num]++;
            } else {
                frequencyMap[num] = 1;
            }
        }

        std::multimap<int, int> sortedFrequencyMap{};
        for (const auto& [k, v] : frequencyMap) {
            sortedFrequencyMap.insert({v, k});
        }

        vector<int> result;
        result.reserve(k);
        auto it = sortedFrequencyMap.crbegin();
        for (auto i = 0; i < k; ++i) {
            result.push_back(it->second);
            it++;
        }
        return result;
    }
};
