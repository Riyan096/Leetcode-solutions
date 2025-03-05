class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        long result = 0;
        int i = 0;
        for (; i < s.length() && s[i] == ' '; i++) {}

        if (i >= s.length()) {
            return 0;
        }
        if (s[i] == '+' || s[i] == '-') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        for (; i < s.length() && isdigit(s[i]); i++) {
            int digit = s[i] - '0';
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            result = result * 10 + digit;
        }
        return static_cast<int>(result * sign);
    }
};