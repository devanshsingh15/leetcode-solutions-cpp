class Solution {
public:
    int climbStairs(int n) {
        if(n<=0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        int p1=1,p2=2;
        for(int i=3;i<=n;i++){
            int ans=p1+p2;
            p1=p2;
            p2=ans;
        }
        return p2;

    }
};
