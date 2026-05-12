class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int result = 0;
        std::stack<int>operands;
        std::set<string>ops {"+", "-", "*", "/"};

        for (auto token:tokens) {
            if (ops.contains(token)) {
                int a = operands.top(); operands.pop();
                result = operands.top(); operands.pop();
                switch (token[0]) {
                    case '+':
                        result += a;
                        break;
                    case '-':
                        result -= a;
                        break;
                    case '*':
                        result *= a;
                        break;
                    case '/':
                        result /= a;
                        break;

                    default:
                        break;
                }
                operands.push(result);
            } else {
                operands.push(stoi(token));
                if (!operands.empty()) {
                    result = stoi(token);
                }
            }
        }
        return result;
    }
};
