class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> temp1(n);
        vector<int> temp2(n);
        vector<int> result(n);

        temp1[0] = nums[0];

        for (int i = 1; i < n; i++) {
            temp1[i] = nums[i] * temp1[i - 1];
        }

        temp2[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            temp2[i] = nums[i] * temp2[i + 1];
        }

        for (int i = 0; i < n; i++) {

            if (i == 0) {
                result[i] = temp2[i + 1];
            }
            else if (i == n - 1) {
                result[i] = temp1[n - 2];
            }
            else {
                result[i] = temp1[i - 1] * temp2[i + 1];
            }
        }

        return result;
    }
};