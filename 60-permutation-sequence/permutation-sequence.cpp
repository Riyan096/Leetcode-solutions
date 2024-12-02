class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> nums;
        for (int i = 1; i <= n; ++i) {
            nums.push_back(i);
        }

        string result;
        k--;
        int fact = 1;
        for (int i = 2; i <= n; ++i) {
            fact *= i;
        }

        for (int i = n; i > 0; --i) {
            fact /= i;
            int index = k / fact;
            result += to_string(nums[index]);
            nums.erase(nums.begin() + index);
            k %= fact;
        }


        return result;
    }
};