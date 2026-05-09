class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lIdx = 0;
        int rIdx = numbers.size()-1;
        
        while (lIdx < rIdx) {
            if (numbers[lIdx] + numbers[rIdx] == target) {
                return vector<int>{lIdx+1, rIdx+1};
            }

            if (numbers[lIdx] + numbers[rIdx] > target) {
                --rIdx;
            } else {
                ++lIdx;
            }
        }

        return {};
    }
};
