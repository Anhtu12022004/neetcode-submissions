class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
        int j = s.size() - 1;

        while (i < j) {

            // bỏ ký tự không hợp lệ bên trái
            if (!isalnum(s[i])) {
                i++;
                continue;
            }

            // bỏ ký tự không hợp lệ bên phải
            if (!isalnum(s[j])) {
                j--;
                continue;
            }

            // so sánh
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};