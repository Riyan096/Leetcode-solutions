class Solution {
public:
    bool isPalindrome(int x) {
        string digits;
        int count = 0;
        int num = x;
        while(num > 0){
            digits += to_string(num % 10);
            count++;
            num /= 10;
        }
        if(x == 0 || digits == to_string(x)){
            return true;
        }
        return false;
    }
};