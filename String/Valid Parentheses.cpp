class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char c : s) {
            // Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                // If stack is empty or top of the stack does not match the closing bracket, return false
                if (stk.empty()) return false;
                char top = stk.top();
                stk.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        // If stack is empty, all opening brackets were properly closed
        return stk.empty();
    }
};
