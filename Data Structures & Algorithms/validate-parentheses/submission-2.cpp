class Solution {
public:
    bool isValid(string s) {
        std::stack<char>myStack {};
        std::unordered_map<char, char>bracesMap {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (auto c:s) {
            if (bracesMap[c]) {
                if ((!myStack.empty()) && (myStack.top() == bracesMap[c])) {
                    myStack.pop();
                } else {
                    return false;
                }          
            } else {
                myStack.push(c);
            }
        }

        if (!myStack.empty()) {
            return false;
        }

        return true;
    }
};
