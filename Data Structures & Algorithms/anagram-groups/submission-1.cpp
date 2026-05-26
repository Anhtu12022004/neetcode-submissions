class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp;

        for (int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            temp.push_back(s);
        }

        unordered_map<string, vector<int>> mp;

        for (int i=0; i<temp.size(); i++){
            mp[temp[i]].push_back(i);
        }

        vector<vector<string>> temp_2;

        for (auto pair : mp) {
            vector<int> index = pair.second;
            vector<string> ana;
            for (int i = 0; i<index.size();i++){
                ana.push_back(strs[index[i]]);
            }
            temp_2.push_back(ana);
        }

        return temp_2;


    }
};
