class Solution {
public:
    bool isPalindrome(int x) {
        long a,r=0;
        long n=x;
        while(x!=0)
        {
            a=x%10;
            r=(r*10)+a;
            x=x/10;
        }
        if(r==n && n>=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
