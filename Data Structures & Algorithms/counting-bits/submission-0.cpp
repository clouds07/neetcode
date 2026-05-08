class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        result.reserve(n+1);
        int pow = 0;
        result.push_back(0);

        for (auto i = 1; i <= n; i++) {
            if ((1 << pow) == i) {
                ++pow;
            }
            result.push_back(result[i - (1 << pow - 1)] + 1);
        }
        return result;
    }
};
