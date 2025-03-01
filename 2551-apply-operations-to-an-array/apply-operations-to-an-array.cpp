class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        if(nums.size() > 2){
            for(int i = 0; i < nums.size() - 1; i++){
                if(nums[i] == nums[i + 1]){
                    nums[i] *= 2;
                    nums[i + 1] = 0;
                }
            }
        }
        vector<int> nonZero, zeros;
        for (int num : nums) {
            if (num != 0) {
                nonZero.push_back(num);
            } else {
                zeros.push_back(num);
            }
        }
        nums = nonZero;
        nums.insert(nums.end(), zeros.begin(), zeros.end());
        return nums;
    }
};