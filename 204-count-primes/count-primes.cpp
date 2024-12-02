class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }
        
        vector<bool> prime((n + 1) / 2, true);
        prime[0] = false;

        for (int i = 3; i * i < n; i += 2) {
            if (prime[i / 2]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    prime[j / 2] = false;
                }
            }
        }

        int count = 1;
        for (int i = 3; i < n; i += 2) {
            if (prime[i / 2]) {
                count++;
            }
        }

        return count;
    }

};