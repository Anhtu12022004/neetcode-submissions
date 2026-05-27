class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for (char c : s) {
            if (isalnum(c)) {          // chỉ giữ chữ và số
                result += tolower(c); // chuyển về chữ thường
            }
        }
        string s_temp = "";
        for (int i = s.size() - 1; i >= 0; i--){
            if (isalnum(s[i])) {
                s_temp += tolower(s[i]);
            }
        }
        if (s_temp == result) return true;
        return false;
    }

};
