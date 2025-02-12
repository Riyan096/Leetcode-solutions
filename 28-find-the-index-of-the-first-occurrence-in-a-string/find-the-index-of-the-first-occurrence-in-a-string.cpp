class Solution {
public:
    vector<int> preprocess(const string pattern) {
        vector<int> badChar(256, -1);
        for (int i = 0; i < pattern.size(); i++) 
            badChar[pattern[i]] = i;
        return badChar;
    }
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m > n) return -1;

        vector<int> badChar = preprocess(needle);
        int index = 0;

        while (index <= (n - m)) {
            int j = m - 1;

            while (j >= 0 && needle[j] == haystack[index + j])
                j--;

            if (j < 0) 
                return index;

            index += max(1, j - badChar[haystack[index + j]]);
        }
        return -1;
    }
};