class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;

        bool flag=false;
        for(auto it:nums){
            if(it==0) flag=true;
        }
        
        bool check=true;
        for(auto it:nums){
            if(it!=0){
                product*=it;
                check=false;
            }
        }
        if(check) product=0;
        
        vector<int> ans;
        for(auto it:nums){
            if(!flag){
                int temp=product/it;
                ans.push_back(temp);
            }
            else{
                if(it==0) ans.push_back(product);
                else ans.push_back(0);
            }
            
        }
        return ans;
    }
};
