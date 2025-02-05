class Solution {
public:
    bool isPalindrome(int x) {
        string digits = to_string(x);
        reverse(digits.begin(), digits.end());

        if(x == 0 || digits == to_string(x)){
            return true;
        }
        return false;
    }
};