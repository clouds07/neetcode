class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        result.reserve(temperatures.size());
        for (auto i = 0; i < temperatures.size(); ++i) {
            int j = 0;
            for (j = i + 1; j < temperatures.size(); ++j) {
                if (temperatures[j] > temperatures[i]) {
                    result.push_back(j - i);
                    break;
                }
            }
            if (j == temperatures.size()) {
                result.push_back(0);
            }
        }

        return result;
    }
};
