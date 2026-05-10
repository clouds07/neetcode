class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        std::unordered_map<char, int> subS1;
        std::unordered_map<char, int> subS2;
        int l = 0, r = 0;

        if (s1.length() > s2.length()) {
            return false;
        }

        for (auto c:s1) {
            subS1[c] += 1;
        }

        int need = subS1.size();
        for (r = 0; r < s2.length(); ++r) {
            subS2[s2[r]] += 1;

            if (r - l + 1 == s1.length()) {
                bool isPerm = true;
                for (auto [k, v]: subS1) {
                    if (subS2[k] != v) {
                        isPerm = false;
                    }
                }
                if (isPerm) {
                    return true;
                } else {
                    subS2[s2[l]] -= 1;
                    ++l;
                }
            } else if (r - l + 1 > s1.length()) {
                subS2[s2[l]] -= 1;
                ++l;
            }
        }

        return false;
    }
};
