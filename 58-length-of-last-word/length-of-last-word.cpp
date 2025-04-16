class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;

        bool b = false;

        for(int i = s.length()-1;i>=0;i--){
            if(s[i] != ' '){
                b = true;
                length++;
            }
            else if(b){
                break;
            }
        }

        return length;
    }
};