class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> remCount;
        remCount[0] = 1;
        int cumSum = 0, count = 0;

        for (int num : nums) {
            cumSum += num;
            int rem = cumSum % k;
            if (rem < 0) rem += k;
            if (remCount.find(rem) != remCount.end()) {
                count += remCount[rem];
            }
            remCount[rem]++;
        }
        
        return count;
    }
};
