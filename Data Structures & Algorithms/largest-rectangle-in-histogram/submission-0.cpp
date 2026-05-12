class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea {0};

        for (int i = 0; i < heights.size(); ++i) {
            int width = 0;
            int ptr = i;

            while ((ptr >= 0) && heights[ptr] && (heights[ptr] >= heights[i])) {
                ++width;
                --ptr;
            }
            ptr = i + 1;
            while (ptr < heights.size() && heights[ptr] && (heights[ptr] >= heights[i])) {
                ++width;
                ++ptr;
            }

            maxArea = std::max(maxArea, width * heights[i]);
        }

        return maxArea;
    }
};
