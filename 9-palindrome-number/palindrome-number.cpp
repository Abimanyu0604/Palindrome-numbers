class Solution {
public:
    bool isPalindrome(long long x) {
        if(x<0){
            return false;
        }
        long long temp=x,r=0;
        while(x){
            r=(r*10)+(x%10);
            x=x/10;
        }
        if(temp != r){
            return false;
        }
        return true;
    }
};