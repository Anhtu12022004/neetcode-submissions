class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";

        for (string s : strs) {
            res += to_string(s.size()) + "#" + s;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;

        while (i < s.size()) {

            int j = i;

            // tìm dấu #
            while (s[j] != '#') {
                j++;
            }

            // lấy độ dài
            int length = stoi(s.substr(i, j - i));

            // lấy string
            string word = s.substr(j + 1, length);

            result.push_back(word);

            // nhảy tới string tiếp theo
            i = j + 1 + length;
        }

        return result;
    }
};