class Solution {
public:
    int lengthOfLastWord(string s) {
        int idx=s.size()-1;
        int ans=idx;
        while(s[idx]==' ') idx--;
        int res=idx;
        for(int i=res;i>=0;i--){
            if(s[i]==' ') break;
            else idx--;
        }
        if(s[s.size()-1]==' ') return res-idx;
        return ans-idx;
    }
};
