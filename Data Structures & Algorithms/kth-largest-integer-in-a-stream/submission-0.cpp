class KthLargest {
private:
    std::multiset<int> localHeap;
    int localK;

public:
    KthLargest(int k, vector<int>& nums) {
        localK = k;
        for (auto num:nums) {
            if (localHeap.size() > localK) {
                localHeap.erase(std::prev(localHeap.end()));
            }
            add(num);
        }
    }
    
    int add(int val) {
        localHeap.insert(val);
        if (localHeap.size() > localK) {
            localHeap.erase(localHeap.begin());
        }

        return *localHeap.begin();
    }
};
