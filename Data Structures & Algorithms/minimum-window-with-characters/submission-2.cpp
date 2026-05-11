class Solution {
public:
    string minWindow(string s, string t) {
        string result {};
        std::unordered_map<char, int> charMap;

        if (t.length() > s.length()) {
            return {};
        }

        for (auto c:t) {
            charMap[c] += 1;
        }

        for (int l = 0; l < s.length(); ++l) {
            // Position in "s" on the first letter present in the substring "t"
            if (!charMap.contains(s[l])) {
                continue;
            }
            int r = l;
            std::unordered_map<char, int> foundMap;

            // Substring processing loop
            while (r < s.length()) {
                if (charMap.contains(s[r])) {
                    foundMap[s[r]] += 1;
                }

                // No need to check if we didn't find sufficient characters
                if (r - l + 1 >= t.length()) {
                    //Verify the success condition
                    bool substrFound = true;
                    for (auto [k, v]:charMap) {
                        if (foundMap[k] < v) {
                            substrFound = false;
                            break;
                        }
                    }
                    
                    if (substrFound) {
                        if (result.empty() || result.length() > (r - l + 1)) {
                            result.clear();
                            result = s.substr(l, r - l + 1);
                        }
                        // just break the while()
                        r = s.length();
                    }
                }
                ++r;
            }
        }

        return result;        
    }
};
