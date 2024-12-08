class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[i] % 2 == 0){
                    swap(nums[i], nums[j]);
                }
            }
        }
        return nums;
    }
};