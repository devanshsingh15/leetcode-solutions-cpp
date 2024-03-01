class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int countOne=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1') countOne++;
        }
        for(int i=0;i<n;i++){
            s[i]='0';
        }
        s[n-1]='1';
        countOne--;
        for(int i=0;i<n;i++){
            if(countOne>0){
                s[i]='1';
                countOne--;
            }
            else break;
        }
        return s;
    }
};
