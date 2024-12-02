class Solution {
public:
    string getPermutation(int n, int k) {
        vector<string> permutations;
        string str;
        for(int i = 1; i <= n; i++){
            str += to_string(i);
        }
        do{
            permutations.push_back(str);
        } while(next_permutation(str.begin(), str.end()));

        return permutations[k-1];
    }
};