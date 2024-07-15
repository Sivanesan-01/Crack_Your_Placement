class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum, i, j;
        for (i = 0; i < nums.size(); i++) {
            for (j = i + 1; j < nums.size(); j++) {
                sum = nums[i] + nums[j];
                if (sum == target)
                    return {i, j};
            }
        }
        return {};
    }
};
