class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        set<vector<int>> result;

        for (int i = 0; i < nums.size(); i++) {

            unordered_set<int> seen;

            for (int j = i + 1; j < nums.size(); j++) {

                int target = -(nums[i] + nums[j]);

                if (seen.count(target)) {

                    vector<int> temp = {
                        nums[i],
                        nums[j],
                        target
                    };

                    sort(temp.begin(), temp.end());

                    result.insert(temp);
                }

                seen.insert(nums[j]);
            }
        }

        return vector<vector<int>>(
            result.begin(),
            result.end()
        );
    }
};