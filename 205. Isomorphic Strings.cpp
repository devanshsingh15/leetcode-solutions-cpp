class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp1,mp2;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            if( (mp1[s[i]] && mp1[s[i]]!=t[i]) || (mp2[t[i]] && mp2[t[i]]!=s[i]) ) return false;
            mp1[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        return true;
    }
};
