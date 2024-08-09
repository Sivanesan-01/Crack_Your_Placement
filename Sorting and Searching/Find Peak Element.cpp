class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max = INT_MIN,a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                a = i;
            }
        }
        return a;
    }
};
