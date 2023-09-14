
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        long long  rev=0;
        int n= x;
        while(x!=0){
            int digit = x%10;
            x=x/10;
            rev = rev*10 + digit;

        }
       if (n == rev){
           return true;
       }
       else{
           return false;
       }
        
    }
};