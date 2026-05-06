class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> sMap;
        std::unordered_map<char, int> tMap;
        for (auto c : s) {
            if (sMap.contains(c)) {
                sMap[c] ++;
            } else {
                sMap.insert({c, 1});
            }
        }
        for (auto c : t) {
            if (tMap.contains(c)) {
                tMap[c] ++;
            } else {
                tMap.insert({c, 1});
            }
        }

        if (sMap.size() != tMap.size()) {
            return false;
        }
        for (auto c : s) {
            if (sMap[c] != tMap[c]) {
                return false;
            }
        }

        return true;
    }
};
