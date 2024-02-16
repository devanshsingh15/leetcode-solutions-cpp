class Solution {
public:
    vector<int> dp;
    int numDecodings(string s) {
        int n=s.size();
        dp.resize(n);
        dp.assign(n,-1);
        return ways(0,s);
    }
    int ways(int i, string s){
        int n=s.size();
        
        if(i>=n) return 1;
        else if(s[i]=='0') return 0;
        else if(i==n-1) return 1;
        else if(dp[i]!=-1) return dp[i];
        
        else if(s[i]=='1' || (s[i]=='2' && (s[i+1]>=48 && s[i+1]<=54)))
            return dp[i]=ways(i+1,s)+ways(i+2,s);
        else return dp[i]=ways(i+1,s);

    }
    
};
