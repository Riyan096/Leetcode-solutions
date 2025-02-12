class Solution {
public:
    vector<int> preprocess(const string pattern) {
        vector<int> badChar(256, -1);
        for (int i = 0; i < pattern.size(); i++) 
            badChar[pattern[i]] = i;
        return badChar;
    }
    int strStr(string haystack, string needle) {
        int i = 0, j = 0;

        while (i <= haystack.length()) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
                if (j == needle.length()) {
                    return i - j;
                }
            } else {
                i = i - j + 1;
                j = 0;
            }
        }
        return -1;
    }
};