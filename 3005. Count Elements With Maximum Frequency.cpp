class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        vector<int> freq(maxi+1,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        int maxEle=0;
        for(int i=0;i<=maxi;i++){
            maxEle=max(maxEle,freq[i]);
        }

        int sum=0;
        for(int i=0;i<=maxi;i++){
            if(freq[i]==maxEle) sum+=freq[i];
        }
        
        return sum;
    }
};
