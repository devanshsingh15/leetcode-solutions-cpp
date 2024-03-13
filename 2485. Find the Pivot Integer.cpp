class Solution {
public:
    int pivotInteger(int n) {
        int mid=(1+n)/2;
        if(n==1) return n;
        while(mid!=n){
            int sum1=0,sum2=0;
            for(int i=1;i<mid;i++){
                sum1+=i;
            }
            for(int i=mid+1;i<=n;i++){
                sum2+=i;
            }
            if(sum1==sum2) return mid;
            else mid++;
        }
        return -1;
    }
};
