class Solution {
public:

    long binarySearch(int n){
        int s=0;
        int e=n;
        long mid=s+(e-s)/2;
        long ans=-1;
        while(s<=e){
            long sq=mid*mid;
            if(sq==n){
                return mid;
            }
            else if(sq<n){
                s=mid+1;
                ans=mid;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }

    int mySqrt(int x) {
        return binarySearch(x);
    }
};
