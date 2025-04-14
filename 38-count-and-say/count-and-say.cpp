class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string s = countAndSay(n-1);
        string res = "";
        char current_char = s[0];
        int num = 1;
        for(char c:s.substr(1) ){
            if(c  == current_char){
                num++;
            } else{
                res +=  to_string(num) + current_char;
                num = 1;
                current_char = c;
            }
        }
        res += to_string(num) + current_char;
        return res;
    }
};