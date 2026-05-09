class Solution {
public:
    bool isPalindrome(string s) {
        string cleanString;
        
        for (auto c : s) {
            if ((c >= 'A') && (c <= 'Z')){
                cleanString += c + 'a' - 'A';
            } else if ((c >= 'a') && (c <= 'z')) {
                cleanString += c;
            } else if ((c >= '0') && (c <= '9')) {
                cleanString += c;
            }
        }

        int lIdx = 0;
        int rIdx = cleanString.size() - 1;
        while (lIdx <= rIdx) {
            if (cleanString[lIdx++] != cleanString[rIdx--]) {
                return false;
            }
        }

        return true;        
    }
};
