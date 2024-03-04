class Solution {
public:
    int bagOfTokensScore(vector<int>& nums, int power) {
        int score=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]<=power){
                power-=nums[i];
                score++;
            }
            else if(nums[i]>power && score>=1 && n-i>1){
                power+=nums[n-1];
                score--;
                n--;
                i--;
            }
        }
        return score;
    }
};
