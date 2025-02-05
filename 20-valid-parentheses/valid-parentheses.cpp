class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> map = {{')', '('}, {']',  '['}, {'}', '{'}};
        
        for(char c : s){
            if(map.count(c)){
                if(!stk.empty() && stk.top() == map[c]){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else{
                stk.push(c);
            }
        }

        return stk.empty();
    }
};