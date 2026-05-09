class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::set<vector<int>> resultSet;

        std::sort(nums.begin(), nums.end());

        for (auto i = 0; i < nums.size() - 2; ++i) {
            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                if (nums[i] + nums[l] + nums[r] < 0) {
                    ++l;
                } else if (nums[i] + nums[l] + nums[r] > 0) {
                    --r;
                } else {
                    resultSet.insert({nums[i], nums[l], nums[r]});
                    ++l;
                    --r;
                }
            }
        }

       vector<vector<int>> result;
        for (auto res : resultSet) {
            result.push_back(res);
        }

        return result;
    }
};
