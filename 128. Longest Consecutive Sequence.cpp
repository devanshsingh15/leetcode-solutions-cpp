class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        sort(a.begin(),a.end());
        int c=1;
        int maxi=1;
        if(a.size()==0) return 0;
        for(int i=1;i<a.size();i++){
            if(a[i]-a[i-1]==1) {
                c++;
                maxi=max(maxi,c);
            }
            else if(a[i]-a[i-1]==0) continue;
            else {
                c=1;
            }
        }
        return maxi;    
    }
};
