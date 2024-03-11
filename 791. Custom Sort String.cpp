class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> hash(26,0);
        for(auto it:order) hash[it-'a']++;
        string s1,s2;
        for(auto c:s){
            if(hash[c-'a']==0) s1+=c;
            else hash[c-'a']++;
        }
        for(auto c:order){
            while(hash[c-'a']>1){
                s2+=c;
                hash[c-'a']--;
            }
        }
        return s2+s1;
    }
};
