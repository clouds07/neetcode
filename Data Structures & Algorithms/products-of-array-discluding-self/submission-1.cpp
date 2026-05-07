class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int preProduct = 1;
        int postProduct = 1;
        vector<int> output;
        vector<int> preProductArray;
        vector<int> postProductArray;
        output.reserve(nums.size());
        preProductArray.reserve(nums.size());
        postProductArray.reserve(nums.size());
        preProductArray.push_back(1);
        postProductArray.push_back(1);

        std::cout << preProduct << std::endl;
        for (auto i = 0; i < nums.size() - 1; ++i) {
            preProduct  *= nums[i];
            std::cout << preProduct << std::endl;
            preProductArray.push_back(preProduct);
        }


        std::cout << std::endl << postProduct << std::endl;
        for (auto i = 0; i < nums.size() - 1; ++i) {
            postProduct *= nums[nums.size() - i - 1];
            postProductArray.push_back(postProduct);
            std::cout << postProduct<< std::endl;
        }

        for (auto i = 0; i < nums.size(); ++i) {
            output.push_back(
                    preProductArray[i] * 
                    postProductArray[nums.size() - i - 1]);
        }

        return output;
    }
};
