class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::set<int> numsOrderedSet(nums.begin(), nums.end());
        std::vector<int> numsOrdered(numsOrderedSet.begin(), numsOrderedSet.end());
        int seqLen = 1;
        int maxSeq = (nums.size() > 0? 1 : 0);

        for (int i = 1; i < numsOrdered.size(); ++i) {
            if (numsOrdered[i] == numsOrdered[i-1] + 1) {
                seqLen += 1;
                maxSeq = std::max(maxSeq, seqLen);
            } else {
                seqLen = 1;
            }
        }

        return maxSeq;
    }
};
