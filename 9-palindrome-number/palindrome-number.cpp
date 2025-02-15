class Solution {
public:
    bool isPalindrome(int x) {
        long long int a=x;
        long long int rev=0;
        if(x<0)
            return false;
        else{
            while(x!=0){
            int rem=x%10;
            rev=rev*10+rem;
            x/=10;
            }
        }
        if(a==rev)
            return true;
        else
            return false;
    }
};