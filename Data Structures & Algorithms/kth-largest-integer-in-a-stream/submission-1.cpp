class KthLargest {
private:
    std::priority_queue<int, vector<int>, greater<int>> localHeap;
    int localK;

public:
    KthLargest(int k, vector<int>& nums) {
        localK = k;
        for (auto num:nums) {
            add(num);
        }
    }
    
    int add(int val) {
        localHeap.push(val);
        if (localHeap.size() > localK) {
            localHeap.pop();
        }

        return localHeap.top();
    }
};
