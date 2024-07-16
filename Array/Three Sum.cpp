class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end()); // Sort the array
        
        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates
            
            int target = -nums[i];
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[left] + nums[right];
                
                if (sum < target) {
                    ++left;
                } else if (sum > target) {
                    --right;
                } else {
                    // Found triplet
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    
                    ++left;
                    --right;
                }
            }
        }
        return result;
    }
};
