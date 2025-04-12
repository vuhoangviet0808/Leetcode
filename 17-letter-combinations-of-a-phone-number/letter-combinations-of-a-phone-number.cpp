class Solution {
    void backtracking(vector<string>& res,string current,string digits, int k, map<char, string> digit_phone){
        if(k==digits.length()){
            res.push_back(current);
            return;
        }
        for(char c: digit_phone[digits[k]]){
            backtracking(res,current+c, digits, k+1, digit_phone);
        }

    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.length() == 0) return res;
        map<char, string> digit_phone = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"},
                        {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        backtracking(res, "", digits, 0, digit_phone);
        return res;
    }
};