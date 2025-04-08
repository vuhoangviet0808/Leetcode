class Solution {
public:
    string intToRoman(int num) {
        map<int, string> roman = {{1, "I"}, {5, "V"}, 
                          {10, "X"}, {50, "L"}, 
                          {100, "C"}, {500, "D"}, 
                          {1000, "M"}};
        int dv = 0;
        string res = "";
        while(num){
            int a = num%10;
            if(1<=a && a < 4){
                int r = pow(10,dv);
                for(int i=0;i<a;i++){
                    res += roman[r];
                }

            } else if(a == 4){
                int r1 = 5*pow(10,dv), r2 = pow(10,dv);
                res += (roman[r1] + roman[r2]);
            }
            else if(5 <= a && a < 9){
                int b = a-5, r1 = 5*pow(10,dv), r = pow(10,dv);
                for(int i=0;i<b;i++){
                    res += roman[r];
                }
                res += roman[r1];
            }
            else if(a == 9){
                int r1 = pow(10,dv), r2 = pow(10,(dv+1));
                res += roman[r2] + roman[r1];
            }
            dv += 1;
            num = num/10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};