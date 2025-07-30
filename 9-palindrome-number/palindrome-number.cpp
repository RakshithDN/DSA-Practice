class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int oriNumber = x;
        int revNumber=0;
        while(x){
            int lastDigit=x%10;
            x=x/10;
            if (revNumber > (INT_MAX - lastDigit) / 10) return false;
            revNumber = revNumber * 10 + lastDigit;
        }
        if(revNumber==oriNumber){
            return true;
        }
        return false;
    }
};