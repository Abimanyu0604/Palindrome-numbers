class Solution {
public:
//swapnil
    bool isPalindrome(int x) {
         if(x<0)
        {
            return false;
        }
        long ans=0;
        long b=x;
        while(x)
        {
            ans=ans*10+x%10;
            x/=10;
        }
        return ans==b;
    }
};