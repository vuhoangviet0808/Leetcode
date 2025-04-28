class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0 || x == 1) return x;
        if(x==-1) return n%2 ? -1:1;
        double res = 1.0;
        long long mu = abs((long long)n);
        long long i;
        for(i=0;i<mu;i+=2){
            res *= pow(x, 2);
        }
        if(i > mu) res /= x;
        return n > 0 ? res : 1/res;
    }
};