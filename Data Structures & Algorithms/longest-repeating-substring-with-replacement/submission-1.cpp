class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        for (char c : s){
            mp[c]++;
        }
        int max_char = 0;
        for (auto x : mp){
            max_char = max(max_char, x.second);
        }
        int j = max_char + k;
        if (j > s.size()) return s.size();
        while (j){
            for (int i = 0; i <= s.size() - j; i++) {
                string s_sub = s.substr(i, j);
                unordered_map<char, int> mp_sub;
                for (char c : s_sub) {
                    mp_sub[c]++;
                }
                int max_sub = 0;
                for (auto x : mp_sub){
                    max_sub = max(max_sub, x.second);
                }
                if (j - max_sub <= k) return j;
            }
            j--;
        }
    }
};
