class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sumCount;
        sumCount[0] = 1;
        int cumSum = 0;
        int count = 0;

        for (int num : nums) {
            cumSum += num;
            if (sumCount.find(cumSum - k) != sumCount.end()) {
                count += sumCount[cumSum - k];
            }
            sumCount[cumSum]++;
        }
        
        return count;
    }
};
