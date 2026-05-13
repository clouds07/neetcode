class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        std::stack<float> times;
        std::map<int, int> pairs;

        for (int i = 0; i < n; ++i) {
            pairs.insert(std::pair{position[i], speed[i]});
        }

        for (auto pair = pairs.rbegin(); pair != pairs.rend(); ++pair) {
            float arrival = (target - pair->first) / float(pair->second);

            if ((times.empty() || (arrival > times.top()))) {
                times.push(arrival);
            }
        }

        return times.size();
    }
};
