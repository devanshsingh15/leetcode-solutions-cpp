class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int res=0;
        for(auto it:s){
            if(it=='(') ans++;
            else if(it==')') ans--;
            res=max(ans,res);
        }
        return res;
    }
};
