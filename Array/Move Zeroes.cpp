class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int lastNonZeroFoundAt = 0;

        // Move all the non-zero elements to the front of the array
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[lastNonZeroFoundAt++] = nums[i];
            }
        }

        // Fill the rest of the array with zeros
        for (int i = lastNonZeroFoundAt; i < n; i++) {
            nums[i] = 0;
        }
    }
};
