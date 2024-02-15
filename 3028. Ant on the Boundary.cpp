class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int total=0,count=0;
        for(auto i:nums){
            total+=i;
            if(total==0)
                count++;
        }
        return count;
    }
};
