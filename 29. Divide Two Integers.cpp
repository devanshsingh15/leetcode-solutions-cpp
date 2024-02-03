class Solution {
public:
    long divide(long dividend, long divisor) {
         if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        return dividend/divisor;
    }
};
