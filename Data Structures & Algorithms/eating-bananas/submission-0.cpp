class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *std::max_element(piles.begin(), piles.end());
        int k = 0;
        int result;

        while (l <= r) {
            k = l + (r - l) / 2;

            long long hours = 0;
            for (auto pile : piles) {
                hours += ceil(static_cast<double>(pile) / k);
            }
            if (hours <= h) {
                result = k;
                r = k - 1;
            } else {
                l = k + 1;
            }
        }
        return result;        
    }
};
