class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result;
        vector<int> nextMaxIndex(n, 0);

        if (n == 1) {
            return {0};
        }

        for (int i = n - 2; i >= 0 ; i--) {
            int index = i + 1;
            while ((index != 0) && (temperatures[i] >= temperatures[index])) {
                // get next index
                index = nextMaxIndex[index];
            }
            nextMaxIndex[i] = index;
        }

        for (int i = 0; i < n; ++i) {
            if (nextMaxIndex[i]) {
                result.push_back(nextMaxIndex[i] - i);
            } else {
                result.push_back(0);
            }
        }

        return result;
    }
};
