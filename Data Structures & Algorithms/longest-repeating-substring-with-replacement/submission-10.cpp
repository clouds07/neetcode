class Solution {
public:
    int characterReplacement(string s, int k) {
        std::unordered_map<char, int> charMap;
        int result = 0;
        int l = 0, r = 0;

        if (k >= s.size() - 1) {
            return s.size();
        }

        while (r < s.size()) {
            int maxChar = 0;
            charMap[s[r]] += 1;

            // get the most occuring character in the set
            for (auto [_, v]:charMap) {
                maxChar = std::max(maxChar, v);
            }

            if ((r - l + 1) - maxChar > k) {
                charMap[s[l]] -= 1;
                ++l;
            }

            result = std::max(result, (r - l + 1 ));
            ++r;
        }

        return result;
    }
};
