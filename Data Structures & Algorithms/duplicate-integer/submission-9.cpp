class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> duplicateMap;
        for (auto num : nums) {
            //if (duplicateMap.count(num)) {
            if (duplicateMap.find(num) != duplicateMap.end()) {
                return true;
            } else {
                //duplicateMap.emplace(num, 1);
                duplicateMap.insert({num, 1});
            }
        }

        return false;
    }
};