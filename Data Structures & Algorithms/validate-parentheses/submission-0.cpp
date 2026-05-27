class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
                continue;
            }
            
            if (st.empty()) return false;
            char x = st.top();

            if (x == '(') x = ')';
            else if (x == '{') x = '}';
            else if (x == '[') x = ']';
            if (x != c) return false;
            st.pop(); 
            
        }
        if (st.empty()) return true;
        return false;
    }
};
