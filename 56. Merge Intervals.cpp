class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++){
            int start=nums[i][0];
            int end=nums[i][1];
            if(!ans.empty() && ans.back()[1]>=end){
                continue;
            }
            for(int j=i+1;j<nums.size();j++){
                if(nums[j][0]<=end){
                    end=max(end,nums[j][1]);
                }
                else break;
            }
            ans.push_back({start,end});
        }
        
        return ans;
    }
};
