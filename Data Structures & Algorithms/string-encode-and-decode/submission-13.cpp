#include <string>

class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for (const auto& str : strs) {
            uint8_t strSize = str.size();
            result += char(strSize) + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while ( i < s.size()) {
            uint8_t strLen = uint8_t(s[i]);
            string str;
            for (auto j = 1; j <= strLen; ++j) {
                str += s[i + j];
            }
            result.push_back(str);
            i += strLen + 1;
        }
        return result;
    }
};
