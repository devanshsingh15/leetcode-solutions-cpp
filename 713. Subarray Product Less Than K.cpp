class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        int prod=1;
        int count=0;
        int n=nums.size();
        if(k<=1) return 0;
        while(end<n){
            prod*=nums[end];
            while(prod>=k) prod/=nums[start++];
            count+=1+(end-start);
            end++;
        }
        return count;
    }
};
