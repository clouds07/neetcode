class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int result = 0;

        int lBar = 0;
        int rBar = 0;
        while (l < r) {
            if (height[l] <= height[r]) {
                if (height[l] <= lBar) {
                    result += (lBar - height[l]);
                    ++l;
                } else {
                    lBar = height[l];
                }
            } else {
                if (height[r] <= rBar) {
                    result += (rBar - height[r]);
                    --r;
                } else {
                    rBar = height[r];
                }
            }
        }

        return result;
    }
};
