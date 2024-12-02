class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        for (int num : nums) {
            if (num > 0) {
                pos++;
            }
        }
        int neg = nums.size() - pos - count(nums.begin(), nums.end(), 0);
        return max(pos, neg);
    }
};