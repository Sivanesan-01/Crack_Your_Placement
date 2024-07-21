class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // Sort the array
        sort(nums.begin(), nums.end());
        
        // Find the median
        int median = nums[nums.size() / 2];
        
        // Calculate the total number of moves
        int moves = 0;
        for (int num : nums) {
            moves += abs(num - median);
        }
        
        return moves;
    }
};
