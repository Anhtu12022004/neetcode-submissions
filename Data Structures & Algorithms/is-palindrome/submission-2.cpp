class Solution {
public:
    bool isPalindrome(string s) {
        string s_temp = "";
        for (char c : s) {
            if (isalnum(c)) {          // chỉ giữ chữ và số
                s_temp += tolower(c); // chuyển về chữ thường
            }
        }

        for (int i = 0; i < s_temp.size()/2; i++){
            if (s_temp[i] != s_temp[s_temp.size() - 1 - i]) return false;
        }
        return true;
    }

};
