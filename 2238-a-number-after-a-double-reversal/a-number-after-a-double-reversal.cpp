class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num <0 && num == 0){
            return 0;
        }
        int i=2,temp2=num;
        while(i){
            int temp =0;
            while(num){
                temp=(temp*10)+(num%10);
                num=num/10;
            }
            i--;
            num=temp;
        }
        if(temp2 == num){
            return true;
        }
        return false;
    }
};