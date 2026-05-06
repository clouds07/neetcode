class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> strMap;

        for (const auto& str : strs) {
            std::vector<int> charArray(26, 0);
            for (auto c:str) {
                charArray[c - 'a']++;
            }

            std::string key;
            for (auto cCount : charArray) {
                key += std::to_string(cCount) + ',';
            }

            strMap[key].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& str : strMap) {
            result.push_back(str.second);
        }

        return result;

    }
};
