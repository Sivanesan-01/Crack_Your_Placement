class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;
        vector<int> expnums;

        for (int num : nums) {
            if (seen.find(num) == seen.end()) {
                seen.insert(num);
                expnums.push_back(num);
            }
        }
        nums = expnums;
        return expnums.size();
    }
};
