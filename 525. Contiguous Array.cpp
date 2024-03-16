class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum=0;
        int maxi=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                sum+=-1;
            else sum+=1;
            if(sum==0){
                if(maxi<i+1){
                    maxi=i+1;
                }
            }
            else if(mp.find(sum)!=mp.end()){
                if(maxi<i-mp[sum]){
                    maxi=i-mp[sum];
                }
            }
            else{
                mp[sum]=i;
            }
        }
        return maxi;
    }
};
