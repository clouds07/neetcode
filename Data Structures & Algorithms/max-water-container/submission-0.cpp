class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int result = 0;

        while (l < r) {
            int water = (r - l) * std::min(heights[l], heights[r]);
            result = std::max(result, water);

            if (heights[l] < heights[r]) {
                ++l;
            } else {
                --r;
            }            
        }
        return result;        
    }
};
