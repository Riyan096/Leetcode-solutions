class Solution {
public:
    string addBinary(string a, string b) {
        int indexA = a.size() - 1;
        int indexB = b.size() - 1;
        int carry = 0;
        string result = "";

        while (indexA >= 0 || indexB >= 0 || carry) {
            char bitA = (indexA >= 0 ? a[indexA] : '0');
            char bitB = (indexB >= 0 ? b[indexB] : '0');
            int sum = (bitA - '0') + (bitB - '0') + carry;
            if (sum == 0) { 
                result += '0';
                carry = 0;
            }
            else if (sum == 1) {
                result += '1';
                carry = 0;
            }
            else if (sum == 2) {
                result += '0';
                carry = 1;
            }
            else if (sum == 3) {
                result += '1';
                carry = 1;
            }
            indexA--;
            indexB--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};