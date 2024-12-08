class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int i = 0,j = 0;
        while(i < n) {
            if(nums[i]&1) {
                i++;
            }
            else {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return nums;

    }
};