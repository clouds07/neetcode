class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int preProduct = 1;
        int postProduct = 1;
        vector<int> output;
        vector<int> preProductArray;
        vector<int> postProductArray;
        preProductArray.push_back(1);
        postProductArray.push_back(1);

        for (auto i = 0; i < nums.size() - 1; ++i) {
            preProduct *= nums[i];
            preProductArray.push_back(preProduct);
            postProduct *= nums[nums.size() - i - 1];
            postProductArray.push_back(postProduct);
        }

        for (auto i = 0; i < nums.size(); ++i) {
            output.push_back(
                    preProductArray[i] * 
                    postProductArray[nums.size() - i - 1]);
        }

        return output;
    }
};
