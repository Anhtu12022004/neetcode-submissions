class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {

            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {

                if (st.empty()) return false;

                char x = st.top();
                st.pop();

                if ((x == '(' && c != ')') ||
                    (x == '{' && c != '}') ||
                    (x == '[' && c != ']')) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};