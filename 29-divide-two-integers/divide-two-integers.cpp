class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        long a = labs(dividend);
        long b = labs(divisor);
        long result = 0;
        for (int i = 31; i >= 0; i--) {
            if ((a >> i) >= b) {
                a -= (b << i);
                result += (1LL << i);
            }
        }
        if ((dividend < 0) ^ (divisor < 0)){
            result = -result;
        }
        return (int)result;
    }
};