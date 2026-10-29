class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char x : s) {
            if (x == '(' || x == '{' || x == '[') {
                stk.push(x);
            } else {
                if (stk.empty()) return false;

                char top = stk.top();

                if ((x == ')' && top == '(') ||
                    (x == '}' && top == '{') ||
                    (x == ']' && top == '[')) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }

        return stk.empty();
    }
};