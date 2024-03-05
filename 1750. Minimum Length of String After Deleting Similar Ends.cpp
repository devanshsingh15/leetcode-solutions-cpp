class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int i=0, j=n-1;
        while(i<j && s[i]==s[j]){
            while(s[i]==s[i+1] && i+1<j) i++;
            while(s[j]==s[j-1] && j-1>i) j--;
            i++;
            j--;
        }
        return j-i+1;
    }
};
