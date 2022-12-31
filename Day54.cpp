class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)return 1;
        
        if(n<0){
            double k = myPow(x, -(n+1));
         double res = 1/(x*k);
            return res;
        }
        else{
        double k = myPow(x, n-1);
        double res = x*k;
        return res;}
    }
};