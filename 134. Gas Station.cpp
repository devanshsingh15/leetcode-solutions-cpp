class Solution {
public:
    int canCompleteCircuit(vector<int>& p, vector<int>& d) {
        int n=p.size();
        int start=0;
        int req=0;
        int extra=0;
        for(int i=0;i<n;i++){
            extra+=(p[i]-d[i]);
            if(extra<0){
                start=i+1;
                req+=extra;
                extra=0;
            }
        }
        if(req+extra>=0) return start;
        return -1;
    }
};
