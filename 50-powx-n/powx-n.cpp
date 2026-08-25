class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            N=-N;
            return (1/pow(x,N));
        }
        return pow(x,n);
        
    }
};