class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        int l = 0, r = 0;
        std::unordered_map<char, int> chars;

        for (r = 0; r < s.size(); ++r) {
            if (chars.contains(s[r])) {
                l = std::max(l, chars[s[r]] + 1);
            }
            chars[s[r]] = r;
            result = std::max(result, r - l + 1);
        }

        return result;
    }
};
