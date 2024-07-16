class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int MEle = 0, count = 0;

        for (int num : nums) {
            if (count == 0) {
                MEle = num;
            }
            
            count += (num == MEle) ? 1 : -1;
        } 
        return MEle;
    }
};
